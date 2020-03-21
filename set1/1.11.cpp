#include <iostream>
#include <math.h>
using namespace std;

int n,i, sumD;

int suma(int n)
{
    int s = 1;
    int p = 2;
    int sq = sqrt(n);

    while(p<=sq)
        {
            if(n%p == 0)
                s += p + (n/p);
            p++;
        }
        if(p == sq)
            s -= p;

        return s;
}

int main()
{
    while(n<1000000)
    {
        n++;
        sumD = suma(n);
        if( sumD<n && n == suma(sumD))
            {
                cout<<"n1: "<<n<<"   n2: "<<sumD<<endl;
                i++;
            };
        //cout<<suma(n)<<endl;

    }
    cout<<"ile: "<<i;
}
