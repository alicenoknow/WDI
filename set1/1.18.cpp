#include <iostream>
#include <math.h>
using namespace std;

double a = 1, b = 2, x, eps = 10e-5;

int main()
{
    cout<<"Podaj x: ";
    cin>>x;

    while(abs(a-b)>eps)
          {
            a = b;
            b = ((x/pow(a,2))+a)/2;
            cout<<b<<endl;
          }
    cout<<b;
}

