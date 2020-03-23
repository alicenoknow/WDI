#include <iostream>
using namespace std;

double func(double x){
    return 1/x;
}

double rectnagle_rule(double a, double b, int n){
    double sum = 0;
    double base_a = (b - a)/n;
    double ave = a + (b - a)/(2*n);
    for(int i = 0; i < n; i++){
        sum += func(ave)*base_a;
        ave += base_a;
    }
    return sum;
}

int main(){
    double a = 1, b = 123;
    int n = 100000;
    cout<<rectnagle_rule(a,b,n);
}
