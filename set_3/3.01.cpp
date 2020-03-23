#include <iostream>
using namespace std;

int pod = 2;
int n;
string s;
string zn = "0123456789ABCDEF";



int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    while(n)
    {
        s = zn[(n%pod)] + s;
        n /= pod;

    }

    cout<<s;
}
