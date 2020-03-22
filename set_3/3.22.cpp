#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int N = 10;

bool czyP(int tab[N], int &maxD)
{
    int sumI = 0, sumE = 0;
    int D = 1;

    for(int i = 0; i < N-1; i++)
    {
        if(tab[i] < tab[i+1])
        {
            sumI += i;
            sumE += tab[i];
            D++;

            cout<<" i: "<<i<<" d: "<<D<<endl;
        }
        else
        {
            if( D+1 > maxD && (sumI + i) == (sumE + tab[i]))
            maxD = D+1;

            sumI = 0;
            sumE = 0;
            D = 0;
        }

    }
    if(maxD == 0)   return false;
    else return true;
}

int main(){

//    srand(time(NULL));
//
//    for(int i = 0; i < N; i++)
//    {
//        tab[i] = 1 + rand()%100;
//    }

    int tab[N] = {2, 1, 2, 3, 4, 1, 7, 7, 8, 2};

    int maxD = 0;

    cout<<czyP(tab ,maxD)<<" Naj: "<<maxD;


}
