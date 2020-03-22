#include <iostream>
#include <cmath>
using namespace std;


bool czyPierwsza(int l)
{
    int n = 0;
    int d = 1;
    while(l)
    {
        n += (l%10)*d;
        l /= 10;
         d *= 2;
    }

    if(n < 2)   return false;
    for(int i = 2; i <= exp(0.5*log(n)); i++)
        if(n%i == 0) return false;
    return true;
}

void _ileKomb(int A, int B, int liczba, int &ile)
{
    if( A == 0 && B == 0){
        if(!czyPierwsza(liczba))    ile++;
    }
    else{
        if(A > 0)
        _ileKomb(A-1, B, liczba*10 +1, ile);
        if(B > 0)
        _ileKomb(A,B-1, liczba*10, ile);
    }


}

int ileKomb(int A, int B)
{
    A -= 1;
    int liczba = 1;
    int ile = 0;
    _ileKomb(A,B,liczba,ile);

    return ile;
}

int main()
{
    cout<<ileKomb(2,3);
}
