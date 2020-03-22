#include <iostream>
using namespace std;

bool is_prime(int n);

int main()
{
    int n;
    cout<<"Type number: ";
    cin>>n;
    cout<<is_prime(n);
}

bool is_prime(int n)
{
    if(n <  4) return n > 1;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    int p = 3;

    while(p*p<=n)
    {
        if(n%p == 0)
            return false;
        p += 2;

        if(n%p == 0)
            return false;
        p += 4;
    }
    return true;
}
