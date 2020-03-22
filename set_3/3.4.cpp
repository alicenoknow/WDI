#include <iostream>
#include <math.h>

using namespace std;

int n,r,tmp;
int d = 1;


int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    int tab[2600];
    tab[0] = 1;

    for(int i = 2; i<=n; i++)
    {
        for(int j = 0; j<d; j++)
        {
            tmp = tab[j]*i + r;
            tab[j] = tmp%10;
            r = tmp/10;
        }

        while(r)
        {
            tab[d] = r%10;
            d++;
            r /= 10;
        }

    }

    for(int i = d-1; i>=0; i--)
    {
        cout<<tab[i];
    }


}
