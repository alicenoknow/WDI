#include <iostream>
using namespace std;

struct ulamek
{
    int l;
    int m;
};

ulamek wpisz()
{
    ulamek a;
    cout<<"Podaj licznik: ";
    cin>>a.l;
    cout<<"Podaj mianownik: ";
    cin>>a.m;

    return a;
}

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
    if(a.m < 0)
    {
        a.l *= -1;
        a.m *= -1;
    }
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

ulamek potega(ulamek a, int p)
{
    ulamek wynik;
    wynik.l = 1;
    wynik.m = 1;
    for(int i = 0; i < p; i++)
    {
        wynik.l *= a.l;
        wynik.m *= a.m;
    }
    skroc(wynik);
    return wynik;
}

int main()
{

    ulamek a = wpisz();
    ulamek b = wpisz();

    wypisz(a);
    cout<<"   ";
    wypisz(b);
    cout<<endl;
    skroc(a);
    skroc(b);
    wypisz(a);
    cout<<"   ";
    wypisz(b);
    cout<<endl;
    wypisz(dodaj(a,b));
    cout<<endl;
    wypisz(odejmij(a,b));
    cout<<endl;
    wypisz(pomnoz(a,b));
    cout<<endl;
    wypisz(podziel(a,b));
    cout<<endl;
    wypisz(potega(a,4));
    cout<<endl;

}
