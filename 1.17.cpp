#include <iostream>

using namespace std;

float a = 1, b = 1, c;      // obojetnie co dam zawsze bedzie 1,61.. z³ota liczba OMG
float il = 1;            // a jak bedzie a/b to il = 2
float eps = 10e-5;

int main()
{

    while(true)
    {
        c = a+b;
        a = b;
        b = c;
        cout<<"a: "<<a<<"  b: "<<b<<"  c: "<<c<<endl;
        if(abs(il-(b/a))<eps)
        {
            cout<<il;
            break;
        }
        il = b/a;
        cout<<"il: "<<il<<endl;

    }
}
