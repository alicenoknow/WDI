#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int N = 4;

struct hetman
{
    int w;
    int k;
};

struct dane
{
    hetman t[100];
    int N;
};

void czy_szach(dane dane)
{
    int tab[100][100];

    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
            tab[i][j] = 0;
    }

for(int i = 0; i < dane.N; i++)
{
    if(tab[dane.t[i].w][dane.t[i].k] == 1)
    {
        cout<<"SZACH SKURWYSYNU";
        return;
    }
    for(int kk = 0; kk < 100; kk++)     tab[dane.t[i].w][kk] = 1;
    for(int ww = 0; ww < 100; ww++)     tab[ww][dane.t[i].k] = 1;
    for(int k1 = dane.t[i].k + 1, w1 = dane.t[i].w + 1; k1 < 100 && w1 < 100; k1++, w1++)      tab[w1][k1] = 1;
    for(int k2 = dane.t[i].k + 1, w2 = dane.t[i].w - 1; k2 < 100 && w2 >= 0; k2++, w2--)       tab[w2][k2] = 1;
    for(int k3 = dane.t[i].k - 1, w3 = dane.t[i].w + 1; k3 >= 0 && w3 < 100; k3--, w3++)       tab[w3][k3] = 1;
    for(int k4 = dane.t[i].k - 1, w4 = dane.t[i].w - 1; k4 >= 0 && w4 >= 0; k4--, w4--)        tab[w4][k4] = 1;

}
cout<<"A nie ma";
return;

}

int main()
{
      srand(time(NULL));
    dane dane;
    dane.N = N;
    for(int i = 0; i < N; i++)
    {
        dane.t[i].w = rand()%100;
        dane.t[i].k = rand()%100;
        cout<<"Het"<<i<<": "<<dane.t[i].w<<"  "<<dane.t[i].k<<endl;
    }

    czy_szach(dane);

}
