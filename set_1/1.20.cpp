#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float geo, art, a,b;
    float eps = 10e-4;
    cout<<"Type a: ";
    cin>>a;
    cout<<"Type b: ";
    cin>>b;

    while(abs(a-b) > eps)
    {
        art = (a+b)/2.0;
        geo = sqrt(a*b);
        a = art;
        b = geo;
        cout<<"geo: "<<geo<<"  arith: "<<art<<endl;
    }
    cout<<"Arithmetic–geometric mean: "<<geo;
}
