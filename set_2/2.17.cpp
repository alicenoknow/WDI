#include <iostream>
#include <math.h>

using namespace std;

int n, k, tmp, suma;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    tmp = n;

    while(tmp)
    {
        k++;
        tmp /=10;
    }

    tmp =  n;

    for(int i = 1; i <= k; i++)
    {

            suma +=(pow(tmp%10,k));
            tmp /= 10;
    }

    if(suma == n)
    cout<<"woohoo";
}
