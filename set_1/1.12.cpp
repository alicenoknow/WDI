#include <iostream>
using namespace std;

int GCD(int a, int b)       //NWD
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

int main()
{
    int a,b,c;
    cout<<"Type a: ";
    cin>>a;
    cout<<"Type b: ";
    cin>>b;
    cout<<"Type c: ";
    cin>>c;
    cout<<"GCD(a,b,c) = "<<GCD(GCD(a,b),c);
}
