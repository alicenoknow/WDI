#include <iostream>
#include <math.h>

using namespace std;

int n,d;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    d = sqrt(n);

    if(n%d == d)
        cout<<d<<"*"<<d;
    else
        while(n%d != 0)
            d++;

    cout<<d<<"*"<<n/d;

}
