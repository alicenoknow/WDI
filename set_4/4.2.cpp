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
    bool np;

    wyp_los(t);

    for(int w = 0; w < MAX; w++)
      {
        for(int k = 0; k < MAX; k++)
        {
            np = true;
            int l = t[w][k];
            cout<<"l: "<<l<<endl;
            while(l)
            {
                if((l%10)%2 == 0)
                {   np = false;
                    break;
                }
                l /= 10;
            }

            if(np) break;
        }
       if(!np)
       {
           cout<<"chujnia"<<endl; break;
       }
      }
      if(np) cout<<"woohoo"<<endl ;

    wypisz_tab(t);
}
