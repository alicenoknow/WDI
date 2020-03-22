#include <iostream>
using namespace std;

int main()
{
float a = 1, b = 1, c;      // obojetnie co dam zawsze bedzie 1,61.. zlota liczba OMG
float il = 1;            // a jak bedzie a/b to il = 2
float eps = 10e-9;
cout.precision(10);
    while(true)
    {
        c = a + b;
        a = b;
        b = c;
        if(abs(il - (b/a)) < eps) break;
        il = b/a;
        cout<<"Div: "<<il<<endl;
    }
    cout<<"Last: "<<il<<endl;
}
