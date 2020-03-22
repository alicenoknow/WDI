#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int N = 10;
int maxD;
int ii;

int main()
{
    int tab[N] = {3,5,2,4,8,8,1,3,8,6};
    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
        //tab[i] = 1 + rand()%N;
        cout<<tab[i]<<"  ";
    }
    int d = 1;
    int q = tab[0] / tab[1];
    for(int i = 0; i < N-1; i++)
    {
        if(tab[i] / tab[i+1] == q)
        {
            d++;
        }
        else
        {
            if (d>maxD)
                {maxD = d; ii = i;}

            d = 2;
            q = tab[i] / tab[i+1];

        }
    }

    cout<<"Max dlugosc: "<<maxD<<"  i: "<<ii;
}


