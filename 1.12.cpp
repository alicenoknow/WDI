#include <iostream>

using namespace std;

int a,b,c;

int NWD(int a, int b);

int main()
{
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj c: ";
    cin>>c;

    cout<<"NWD(a,b,c) = "<<NWD(NWD(a,b),c);
}

int NWD(int a, int b)
{
   int r = a%b;

    while(r != 0)
    {
        a = b;
        b = r;
        r = a%b;
    }
   return b;
}
