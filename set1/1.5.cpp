#include <iostream>
using namespace std;

double a, b = 2, x, eps = 0.1;

int main()
{
    cout<<"Podaj x: ";
    cin>>x;

    while(abs(a-b)>eps)
          {
            a = b;
            b = ((x/a)+a)/2;
          }
    cout<<b;
}
