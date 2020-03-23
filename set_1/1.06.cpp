#include <iostream>         //bisekcja dla funkcji x^x - c = 0
#include <math.h>
using namespace std;

double fun(double x, double c);

int main()
{
    double x,f,a,b,c,eps;
    x = f = a = 0;
    c = 2019;
    b = 5;
    eps = 10e-16;

    while(b-a>eps)
     {
         x = (a+b)/2;
         f = fun(x,c);
        if(f > 0) b = x;
        else a = x;
     }
   cout<<x;
}

double fun(double x, double c)
{
    return pow(x,x)-c;
}
