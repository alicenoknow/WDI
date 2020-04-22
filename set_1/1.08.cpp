#include <iostream>
using namespace std;

bool is_prime(int n);
bool isPrime(int number);

int main()
{
    int n;
    cout<<"Type number: ";
    cin>>n;
    cout<<isPrime(n);
}

bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2 || number == 3) return true;
    if(number % 2 == 0 || number % 3 == 0) return false;
    for(int i=5; (i*i)<=number;){
        if(number % i == 0 ) return false;
        i += 2;
        if(number % i == 0 ) return false;
        i += 4;
    }
    return true;
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
