#include <iostream>
#include <cmath>

using namespace std;

const int N = 3;

bool czyPszy(int t[N][N], int w, int k)
{
    bool tab[10] = {0,0,0,0,0,0,0,0,0,0};
    int l = t[w][k];

    while(l)
    {
        tab[l%10] = true;
        l /= 10;
    }
    for(int i = -1; i <= 1; i++)
        for(int j = -1; j <= 1; j++)
        {
            if(w+i > 0 && w+i < N && k+j > 0 && k+j < N)
            {   int l2 = t[w+i][k+j];
                while(l2)
                {
                    if(tab[l2%10] == false)   return false;
                    l2 /= 10;
                }
            }
        }

    return true;
}

int ilePszy(int t[N][N])
{
    int licznik = 0;

    for(int w = 0; w < N; w++)
        for(int k = 0; k < N; k++)
            if(czyPszy(t,w,k)) licznik++;

    return licznik;

}

int main()
{

    int t[N][N] = {12,21,122,1222,212,2121,12,221,2212};
    cout<<ilePszy(t);
}
