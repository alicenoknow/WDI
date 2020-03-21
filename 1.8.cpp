#include <iostream>
#include <math.h>

using namespace std;

int n;

bool czyPierwsza(int n);

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;
    cout<<czyPierwsza(n);


}

bool czyPierwsza(int n)
{
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    int p = 3;

    while(p<=sqrt(n))
    {
        if(n%p == 0)
            return false;
        p+=2;

        if(n%p == 0)
            return false;
        p+=4;

    }
    return true;
}
