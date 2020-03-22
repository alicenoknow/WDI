#include <iostream>
using namespace std;

const int N = 4;
const int N2 = N*N;

void ff1(int tab[N][N]);
void ff2(int tab[N2]);
void wypisz(int tab[N2]);

int main()
{
    int t1[N][N];
    int t2[N2];


    ff1(t1);
    ff2(t2);

    for(int i = 0; i < N; i++)
    {
        for( int j = 0; j < N; j++)
        {
            int k = 0;
            while(k < N2)
            {
                if(t1[i][j] == t2[k]) break;
                else k++;
            }
            if(k == N2-1)
                t2[(i*N + j)] = t1[i][j];
        }
    }

    wypisz(t2);
}

void ff1(int tab[N][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout<<"  t["<<i<<"]["<<j<<"]: ";
            cin>> tab[i][j];
        }
    }
}

void ff2(int tab[N2])
{
    for(int i = 0; i < N2; i++)
        tab[i] = 0;
}

void wypisz(int tab[N2])
{
    for(int i = 0; i < N2; i++)
    {
            cout<<tab[i]<<"  ";
    }
}
