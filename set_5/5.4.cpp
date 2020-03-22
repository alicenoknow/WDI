#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int N = 10;

struct ulamek
{
    int l;
    int m;
};

int nwd(int a, int  b)
{
    int r = a%b;
    while(r)
    {
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}

int nww(int a, int b)
{
    return a*b/nwd(a,b);

}

void skroc(ulamek &a)
{
    int n = nwd(a.l,a.m);
    a.l /= n;
    a.m /= n;
}

ulamek dodaj(ulamek a, ulamek b)
{
    ulamek wynik;
    wynik.m = nww(a.m,b.m);
    wynik.l = a.l*(wynik.m/a.m)+ b.l * (wynik.m/b.m);
    skroc(wynik);

    return wynik;
}

ulamek odejmij(ulamek a, ulamek b)
{
    b.l *= -1;
    ulamek wynik = dodaj(a,b);
    if(wynik.m < 0)
    {
        wynik.l *= -1;
        wynik.m *= -1;
    }
    return wynik;

}

ulamek pomnoz(ulamek a, ulamek b)
{
    ulamek wynik;
    wynik.l = a.l * b.l;
    wynik.m = a.m * b.m;
    skroc(wynik);
    return wynik;
}

ulamek podziel(ulamek a, ulamek b)
{
    ulamek wynik;
    int buf = b.l;
    b.l = b.m;
    b.m = buf;
    return pomnoz(a,b);
}

void wypisz(ulamek a)
{
    cout<<a.l<<"/"<<a.m;
}

int ArytGeo(ulamek t[N])
{
    ulamek r;
    ulamek q;
    int LA = 0;
    int LG = 0;
    int dA = 0;
    int dG = 0;
    for(int i = 1; i < N-1; i++)
    {
        if((odejmij(t[i], t[i-1]).l == odejmij(t[i+1], t[i]).l)&&(odejmij(t[i], t[i-1]).m == odejmij(t[i+1], t[i]).m))
              dA++;
           else
           {
               if(dA > 0) LA++;
               dA = 0;
           }
         if((podziel(t[i], t[i-1]).l == podziel(t[i+1], t[i]).l)&&(podziel(t[i], t[i-1]).m == podziel(t[i+1], t[i]).m))
              dG++;
           else
           {
               if(dG > 0) LG++;
               dG = 0;
           }
    }

    if(LA>LG) return 1;
    if(LA == LG) return 0;
    if(LA<LG) return -1;

}

int main()
{
    ulamek t[N];

    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {
        t[i].l = 1 + rand()%100;
        t[i].m = 1 + rand()%100;
        skroc(t[i]);
        wypisz(t[i]);
        cout<<endl;
    }

    cout<<"WYNIK: "<<ArytGeo(t);

}
