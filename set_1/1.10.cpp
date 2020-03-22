#include <iostream>
using namespace std;

const int LIMIT = 1000000;

void print_perfect_numbers(int LIMIT)
{
    int n = 1;
    int suma;
    int p;

    while(n<LIMIT)
    {
        suma = 1;
        p = 2;
        n++;
        while(p*p <= n)
        {
            if(n%p == 0) suma += p + (n/p);
            p++;
        }
        if(p*p == n) suma -= p;
        if(suma == n) cout<<n<<endl;
    }
}

int main()
{
   print_perfect_numbers(LIMIT);
}
