#include <iostream>
#include <math.h>
using namespace std;

bool is_fib_product(int x)
{
    int a = 2, b = 3, c = 0;
    if(x <= 2) return true;
    while(b <= (x/2))
    {
        if(a*b == x)  return true;
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

int main()
{
    int x;
    cout<<"Type x: ";
    cin>>x;
    cout<<is_fib_product(x);
}
