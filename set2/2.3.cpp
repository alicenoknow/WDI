#include <iostream>
using namespace std;

int x,r,buf;
int podst = 10;
bool jest = true;

int main()
{
    cout<<"podaj x: ";
    cin>>x;

    buf = x;

    while(jest)
    {
        while(x>0)
        {
            r = 10*r  + x%podst;
            x /= podst;
        }
        cout<<r<<endl;
        if(r==buf)
         cout<<buf<<" jest w systemie "<<podst<<endl;
        podst -= 8;
        if(r != buf || podst < 0)
            jest = false;
        r = 0;
        x = buf;
    }


}
