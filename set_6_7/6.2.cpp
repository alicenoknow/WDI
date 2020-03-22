#include <iostream>
using namespace std;

const int N = 5;
int tab[N] = {1,3,5,7,8};

bool waga(int m, int i)
{
    if(i == N)  return false;
    if(m == 0)  return true;

    return waga(m-tab[i], i+1) || waga(m, i+1) || waga(m+tab[i], i+1);
}

int main()
{
    cout<<waga(7,0);
}
