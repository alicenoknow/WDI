#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int N = 8;

void wypelnij(int t[N][N])
{
    srand(time(NULL));

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            t[i][j] = 1 + rand()%99;
}

void wypisz(int t[N][N])
{
    for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            cout<<t[i][j]<<"  ";
            cout<<endl;
        }
}

void krol(int t[N][N], int w, int k, int sumka, int &minSumka)
{
    sumka += t[w][k];

    if(w == 7){
           if(sumka < minSumka) minSumka = sumka;
        sumka = 0;
       }
    else{

        if((k-1) >= 0)  krol(t, w+1, k-1, sumka, minSumka);
        if((k+1) < N) krol(t, w+1, k+1, sumka, minSumka);
        krol(t, w+1, k, sumka, minSumka);
    }


}

int main()
{
    int t[N][N];
    wypelnij(t);
    wypisz(t);

    int minSumka = INT_MAX;

    krol(t,0,4,0,minSumka);

    cout<<endl<<"min: "<<minSumka;
}
