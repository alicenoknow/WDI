#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int MAX = 5;

void wyp_los(int t[MAX][MAX])
{
    srand(time(NULL));
    for(int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++)
            t[i][j] = rand()%100;
}

void wypisz_tab(int t[MAX][MAX])
{
    for(int i = 0; i < MAX; i++)
        {for(int j = 0;  j < MAX; j++)
            {
                cout<<t[i][j]<<"   ";
            }
            cout<<endl;
        }
}

int main()
{
    int t[MAX][MAX];
    int sm = 0;
    int sk = 0;
    int imax = 0;
    int kmax, wmax;

    wyp_los(t);

   for(int w = 0; w < MAX; w++)
   {
       for(int i = 0; i < MAX; i++)
            sm += t[w][i];
       for(int k = 0; k < MAX; k++)
       {
           for(int i = 0; i < MAX; i++)
            sk += t[i][k];

            if(sk/sm > imax)
            {
                imax = sk/sm;
                wmax = w;
                kmax = k;
            }
       }
   }

   cout<<"Wiersz: "<<wmax<<"  Kolumna: "<<kmax<<endl;

    wypisz_tab(t);
}
