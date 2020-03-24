#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x, prevx = 0, deriv, fun;
    double eps = 10e-9, a = 0, b = 11, c = 2017;
    x = (a+b)/2;
    while(abs(x-prevx) > eps){
        prevx = x;
        deriv = log(x)*exp(x*log(x)) + exp(x*log(x));
        fun = exp(x*log(x)) - c;
        x = prevx - fun/deriv;
        cout<<x<<endl;
    }
    cout<<"result: "<<x;
}
