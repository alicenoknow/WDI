#include <iostream>

using namespace std;

long j, L2, L5, n;
long sil = 1;

int t[4] = {6, 2 , 4, 8};

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;
    for(int i = 2; i<=n; i++)
    {
        for( j = i; (j%2==0 && j>0) ; j/=2) L2++;
        for(j; (j%5==0 && j>0); j/=5) L5++;

        sil *= j;
    }
    L2 -=L5;

    sil *= t[(L2%4)];

    cout<<sil%10;

}
