#include <iostream>
using namespace std;

void print_divisors(int n)
{
    int p = 1;
    while(p*p < n)
    {
        if(n%p == 0)
            cout<<p<<"  "<<n/p<<"  ";
        p++;
    }
    if(p*p == n) cout<<p;
}

int main()
{
    int n;
    cout<<"Type number: ";
    cin>>n;
    print_divisors(n);
}
