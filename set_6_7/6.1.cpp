#include <iostream>
using namespace std;

const int N = 10;
int t[N] = {1,2,3,4,5,6,7,8,9,10};

bool waga(int n, int p)
{
    if(n == 0) return true;
    if(p == N) return false;

    return waga(n-t[p], p+1) || waga(n, p+1);
}

int main()
{
    cout<<waga(81,0);
}
