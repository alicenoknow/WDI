#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;

const int N = 8;

struct punkt {
 int x;         // zakres wsp. 0..31
 int y;         // zakres wsp. 0..31
};

struct dane {
 punkt t[100];          // po³o¿enia punktów
 int N;                  // liczba punktów
};

bool kwadrat(dane dane);

int main()
{
    int k = N-2;
    int hop = 0;
    srand(time(NULL));
    dane dane;
    punkt b;

    for(int i = 0; i < N; i++)
    {
        dane.t[i].x = rand()%32;
        dane.t[i].y = rand()%32;
        cout<<"x: "<< dane.t[i].x<<"  y: "<<dane.t[i].y<<endl;
    }

    cout<<kwadrat(dane);
}

bool kwadrat(dane dane)
{
    int k = N-2;
    int hop;
    punkt b;
    do
    {
        hop = 0;

        for( int i = 0; i <=k; i++ )
        {
            if(dane.t[i+1].x < dane.t[i].x)
            {
                 b = dane.t[i];
                 dane.t[i] = dane.t[i+1];
                 dane.t[i+1] = b;
                 hop = i;
             }
             if(dane.t[i+1].x == dane.t[i].x && dane.t[i+1].y < dane.t[i].y)
             {
                 b = dane.t[i];
                 dane.t[i] = dane.t[i+1];
                 dane.t[i+1] = b;
             }
        }
        k = hop - 1;
     }
 while(hop);

    for(int i = 0; i < N-1; i++)
    {
        if(dane.t[i].x == dane.t[i+1].x)
        {
            int a = abs(dane.t[i].y - dane.t[i+1].y);
            for(int j = i + 2; j < N-1; j++)
            {
                if(abs(dane.t[j].x - dane.t[i].x)>a) break;
                if((dane.t[j].y < dane.t[i+1].y) && (dane.t[j].y > dane.t[i].y)) break;
                if((dane.t[j].x == dane.t[j+1].x) && (abs(dane.t[j].x - dane.t[i].x) == a) && (abs(dane.t[j].y - dane.t[j+1].y) == a))
                    return true;
            }
        }
    }

    return false;
}
