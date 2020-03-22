#include <iostream>
using namespace std;

const int LIMIT = 1000000;

int sumOfdiv(int n)
{
    int sum = 1;
    int p = 2;

    while(p*p < n)
        {
            if(n%p == 0)  sum += p + (n/p);
            p++;
        }
        if(p*p == n)
            sum += p;
        return sum;
}

void printAmicable(int LIMIT)             //zaprzyjaznione liczby
{   int n = 1, sumD;
    while(n < LIMIT)
    {
        sumD = sumOfdiv(n);
        if(sumD < n && n == sumOfdiv(sumD))  cout<<n<<"   "<<sumD<<endl;
        n++;
    }
}

int main()
{
    printAmicable(LIMIT);
}
