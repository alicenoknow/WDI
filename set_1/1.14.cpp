#include <iostream>
#include <math.h>
using namespace std;

double cosMaclaurin(double x, int n){
    double sign = 1, res = 1, fact = 1, pow = 1;
    x = x*M_PI/180;
    for(int i = 1; i <= n; i++){
        fact *= i;
        pow *= x;
        if(i % 2 == 0){
            sign *= -1;
            res += sign*pow/fact;
        }
    }
    return res;
}

int main(){
    int n;
    double alfa;
    cout<<"Type alfa: ";
    cin>>alfa;
    cout<<"Type n: ";
    cin>>n;
    double res = cosMaclaurin(alfa, n);
    cout<<"Result: "<<res<<endl;
    cout<<"Library result: "<<cos(alfa*M_PI/180);
}
