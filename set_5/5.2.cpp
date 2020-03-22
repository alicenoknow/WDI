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
//    if(wynik.m < 0)
//    {
//        wynik.l *= -1;
//        wynik.m *= -1;
//    }
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
    ulamek A1,A2,B1,B2,C1,C2;
    ulamek x, y;

    cout<<"Podaj A1: ";
    A1 = wpisz();
    cout<<"Podaj B1: ";
    B1 = wpisz();
    cout<<"Podaj C1: ";
    C1 = wpisz();
    cout<<"Podaj A2: ";
    A2 = wpisz();
    cout<<"Podaj B2: ";
    B2 = wpisz();
    cout<<"Podaj C2: ";
    C2 = wpisz();

    ulamek W, Wx, Wy;

    W = odejmij(pomnoz(A1,B2),pomnoz(A2,B1));
    Wx = odejmij(pomnoz(C1,B2),pomnoz(B1,C2));
    Wx = odejmij(pomnoz(A1,C2),pomnoz(A2,C1));

    x = podziel(Wx,W);
    y = podziel(Wy, W);

    wypisz(x);
    cout<<endl;
    wypisz(y);


}
