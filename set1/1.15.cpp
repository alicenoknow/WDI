#include <iostream>
#include <math.h>

using namespace std;

double ciag(double a);

double il = 1;


int main()
{
    double a = sqrt(0.5);

    while(ciag(a) - a>10e-15)
    {
        il *= a;
        a = ciag(a);
    }
        cout.precision(99);
    cout<<2.0/il;
}

double ciag(double a)
{
    return sqrt(0.5+0.5*a);
}
