#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int N = 100;
int maxD;
int ii;

int main()
{
    int tab[N];
    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
        tab[i] = 1 + rand()%N;
        cout<<tab[i]<<"  ";
    }
    int d = 1;
    for(int i = 0; i < N-1; i++)
    {
        if(tab[i] < tab[i+1])
        {
            d++;
        }
        else
        {
            if (d>maxD)
                {maxD = d; ii = i;}

            d = 1;

        }
    }

    cout<<"Max dlugosc: "<<maxD<<"  i: "<<ii;
}
