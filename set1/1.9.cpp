#include <iostream>
#include <math.h>

using namespace std;

int n;
int p = 1;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    while(p<=sqrt(n))
    {
        if(n%p == 0)
            cout<<endl<<p<<endl<<n/p;
        p++;
    }
}
