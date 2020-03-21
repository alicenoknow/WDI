#include <iostream>

using namespace std;

int a,b,c;

int NWD(int a, int b);
int NWW(int a, int b);

int main()
{
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj c: ";
    cin>>c;

    cout<<"NWW(a,b,c) = "<<NWW(NWW(a,b),c);
}

int NWD(int a, int b)
{
    while(a!=b)
    if(a>b)
        a-=b;
    else
        b-=a;
    return a;
}

int NWW(int a, int b)
{
    return a*b/NWD(a,b);
}

