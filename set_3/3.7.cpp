#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int N = 10;

int main()
{
    int tab[N];

    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
        tab[i] = 1 + rand()%1000;
        cout<<tab[i]<<"   ";
    }

    for(int i = 0; i < N; i++)
    {
        bool np = false;
        while(tab[i])
        {
            int k = tab[i]%10;
            if(k%2 == 1)
                np = true;
            tab[i] /= 10;
        }
        if(!np)
        {
            cout<<"chuuuuj";
            break;
        }
    }
}
