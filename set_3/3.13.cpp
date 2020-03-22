#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int N = 10;
int maxdD, maxuD;
int iu, id;

int main()
{
    int tab[N] = {2,4,6,8,6,4,2,0, -2, 6};
    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
        //tab[i] = 1 + 2*(rand()%47);
        cout<<tab[i]<<"  ";
    }
    int d = 1;
    int q = tab[0] - tab[1];
    for(int i = 0; i < N-1; i++)
    {
        if(tab[i] - tab[i+1] == q)
        {
            d++;
        }
        else
        {
            if (d > maxdD && q < 0)
                {
                    maxdD = d;
                    id = i;
                }
            if(d > maxuD && q > 0)
                {
                    maxuD = d;
                    iu = i;
                }

            d = 2;
            q = tab[i] - tab[i+1];

        }
    }


    cout<<"Max dlugosc roznica: "<<abs(maxdD - maxuD)<<"  iu: "<<iu<<"  id: "<<id;
}



