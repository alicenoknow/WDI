#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int const N = 5;
int surma;

void dwie_wieze(int t[N][N], int &x1, int &x2, int &y1, int &y2);

int main()
{
    srand(time(NULL));

    int t[N][N];
    int x1, x2, y1, y2;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin>>t[i][j];
            //t[i][j] = rand()%10;

//    for(int i = 0; i < N; i++)
//       {
//          for(int j = 0; j < N; j++)
//            cout<<t[i][j]<<"  ";
//        cout<<endl;
//       }
       cout<<endl;

       dwie_wieze(t, x1, x2, y1, y2);

       cout<<endl<<"x1: "<<x1<<"  y1: "<<y1<<"  x2: "<<x2<<"  y2: "<<y2;

}

void dwie_wieze(int t[N][N], int &x1, int &x2, int &y1, int &y2)
{
    int sumki[N][2];
    int maxSumka = 0;
    int maxSumka2 = 0;

     for(int i = 0; i < 2; i++)
        for(int j = 0; j < N; j++)
                sumki[j][i] = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            {
                sumki[i][0] += t[i][j];
                sumki[i][1] += t[j][i];
            }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout<<sumki[j][i]<<"  ";
        }
        cout<<endl;
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int sumka = sumki[i][1] + sumki[j][0] - 2* t[i][j];

            if(sumka > maxSumka)
            {
                maxSumka = sumka;
                x1 = i;
                y1 = j;
            }
        }
    }
    sumki[x1][1] = 0;
    sumki[y1][0] = 0;

//tu cos ppousuwac

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int sumka = sumki[i][1] + sumki[j][0] - 2* t[i][j];

            if(sumka> maxSumka2)
            {
                maxSumka2 = sumka;
                x2 = i;
                y2 = j;
            }
        }
    }

cout<<"MaxSumka: "<<maxSumka<<"  "<<maxSumka2;
}

