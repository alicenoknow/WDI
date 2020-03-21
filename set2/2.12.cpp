#include <iostream>

using namespace std;

int n, buf;
bool jest;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    while(n)
    {
        buf = n%10;
        n/=10;
        if(buf<(n%10))
           {
               jest = false;
               break;
           }
        jest = true;
    }
    if(jest)
        cout<<"wooohoo";
}
