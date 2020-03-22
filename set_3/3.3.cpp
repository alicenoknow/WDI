#include <iostream>
#include <math.h>
using namespace std;

int const N = 1000;
bool podzielna[N] = {false};
int w;


int main()
{

    for(int i = 2; i<=sqrt(N); i++)
    {
        if(!podzielna[i])
        {
            w = i*i;
            while(w<N)
            {
                podzielna[w] = true;
                w += i;
            }
        }
    }

    int ile = 0;
    for(int i=2; i<N; i++)          //i-liczba;
    {
        if(!podzielna[i])
            {cout << i << endl;
            ile++;}

    }

    cout<<endl<<ile;

}
