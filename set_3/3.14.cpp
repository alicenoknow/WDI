#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int N = 10;
int maxD;
int ii,jj;

int main()
{
    int tab[N] = {5,1,2,3,7,3,2,1,9,8};
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

        for(int j = i+1; j < N; j++)
        {
            if(tab[i] == tab[j])
            {
                d = 1;
                int k = 1;
                while((i+k)<=(j-k))
                {
                    if(tab[i+k] == tab[j-k])
                        d++;
                    else break;
                    k++;
                }
            }
            if(d>maxD)
            {
                maxD = d;
                ii = i;
                jj = j;
            }


        }
    }

    cout<<"Max dlugosc: "<<maxD<<"  i: "<<ii<<" j: "<<jj;
}



