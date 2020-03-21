#include <iostream>

using namespace std;

int n,tmp;
int a = 1, b = 1, c;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    if(n<=8)
        cout<<9;
    else
    {


    while(b<n)
    {
        c = a + b;
        a = b;
        b = c;
    };

    cout<<b+1;

    }


}
