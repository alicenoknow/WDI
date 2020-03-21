#include <iostream>         //bisekcja dla funkcji x^x - c = 0
#include <math.h>
using namespace std;
double funkcja(double x);
double x,f,a,b,eps;
int main()
{
    a = 0;
    b = 5;
    eps = 10e-16;

    while(b-a>eps)
     {
         x=(a+b)/2;
         f = funkcja(x);

        if(f>0) b=x;
        else a=x;
     }

   cout<<x;

}

double funkcja(double x)
{

    return pow(x,x)-2019;
}
