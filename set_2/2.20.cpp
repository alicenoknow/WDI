#include <iostream>
#include <math.h>
using namespace std;

double x,popx, poch,f;
double eps = 10e-9;
double a = 0, b = 11;


int main()
{
    x = (a+b)/2;
    while(abs(x-popx)>eps)
    {
       // cout<<x<<endl;
        popx = x;
        poch = log(x)*exp(x*log(x)) + exp(x*log(x));
        f = exp(x*log(x)) - 2017;
        x = popx -f/poch;
        cout<<x<<endl;

    }

    cout<<"wynik: "<<x;


}
