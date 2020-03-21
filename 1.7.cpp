#include <iostream>
#include <math.h>

using namespace std;

int x;
int a = 2, b = 3, c;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>x;

    if(x<=2)
        cout<<"woohoo";

    while(b<=(x/2))
    {
        if(a*b == x)
        {
            cout<<"woohoo";
            break;
        }
        c = a+b;
        a = b;
        b = c;
    }
}
