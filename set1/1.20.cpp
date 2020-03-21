#include <iostream>
#include <math.h>

using namespace std;

float geo, art;
float a,b;
float eps = 10e-4;

int main()
{
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;

    while(abs(a-b)>eps)
    {
        art = (a+b)/2.0;
        geo = sqrt(a*b);

        a = art;
        b = geo;
        cout<<"geo: "<<geo<<"  aryt: "<<art<<endl;

    }
    cout<<"Srednia aryt-geo: "<<geo;
}
