#include <iostream>
using namespace std;

bool czyPierwsza(int n)
{
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0)   return false;
    int p = 3;
    while(p*p <= n)
    {
        if(n%p == 0) return false;
        p += 2;
        if(n%p == 0) return false;
        p += 4;
    }
    return true;
}

void _wykresl(int n, int a)
{
    if(n > 0)
    {
        if(a > 10)
            if(czyPierwsza(a)) cout<<a<<endl;
        _wykresl(n/10, a);
        _wykresl(n/10, 10*a + n%10);
    }
}

void wykresl(int n)
{
    int rn = 0;
    while(n)
    {
        rn = 10*rn + n%10;
        n /= 10;
    }
     _wykresl(rn, 0);

}

int main()
{
    wykresl(1234);
}
