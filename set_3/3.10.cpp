#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int const N = 20;

void wypisz(int t[N])
{
    for(int i = 0; i < N; i++)
        cout<<t[i]<<"  ";
    cout<<endl;
}

void wyp_los(int t[N])
{
    srand(time(NULL));
    for(int i = 0; i < N; i++)
        t[i] = rand()%100;
}

int najPod(int t[N])
{
    int naj = 1;
    int d = 1;
    for(int i = 0; i < N-1; i++)
    {
        if(t[i]<t[i+1]) d++;
        else
        {   if(d > naj) naj = d;

            d = 1;
        }
    }
    return naj;
}

int main()
{
   int t[N];

   wyp_los(t);
   wypisz(t);

    cout<<"Naj pod: "<<najPod(t);

}
