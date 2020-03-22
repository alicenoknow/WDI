#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    while(a != b)
    if(a > b)
        a -= b;
    else
        b -= a;
    return a;
}

int LCM(int a, int b)
{
    return a*b/GCD(a,b);
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
    cout<<"LCM(a,b,c) = "<<LCM(LCM(a,b),c);
}

