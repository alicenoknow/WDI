#include <iostream>

using namespace std;

int main()
{
    int a,b,n;

    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj n: ";
    cin>>n;

   cout<<a/b<<".";


    for(int i=0; i<n; i++)
    {
        a = a%b;
        a *= 10;
       cout<<a/b;
    }
}
