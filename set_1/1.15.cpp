#include <iostream>
#include <math.h>
using namespace std;

double seq(double a){
    return sqrt(0.5 + 0.5*a);
}

double approximatePI(double eps){
    double il = 1;
    double a = sqrt(0.5);
    while(seq(a) - a > eps)
    {
        il *= a;
        a = seq(a);
    }
    return 2.0/il;
}

int main(){
    double eps = 10e-15;
    cout.precision(99);
    cout<<approximatePI(eps);
}
