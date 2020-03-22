#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a = 1, b = 2, x, eps = 10e-10;
    cout<<"Type x: ";
    cin>>x;
    cout.precision(12);
    while(abs(a-b) > eps)
          {
            a = b;
            b = ((x/pow(a,2)) + a)/2;
            cout<<b<<endl;
          }
    cout<<b;
}

