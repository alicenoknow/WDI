#include <iostream>
#include <math.h>

using namespace std;

int n,x;
int a = 1, b = 1, c;
int a1,b1,c1;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    while(a<sqrt(n))
    {
        c = a+b;
        a=b;
        b=c;

        if(n%a == 0)
        {
            a1 = a;
            b1 = b;
            c1 = c;
            while(a1<=n)
            {
                if(a*b1 == n)
                {
                    cout<<"Woohoo";
                    break;
                }
                c1 = a1 + b1;
                a1 = b1;
                b1 = c1;
            }
        }
    }
    if(b == n)
        cout<<"Woohoo";

}
