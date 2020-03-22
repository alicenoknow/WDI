#include <iostream>
using namespace std;

const int MAX = 5;

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
    int t[MAX] [MAX];
    int l = 1;
    int pw = 0;
    int pk = 0;
    int kw = MAX - 1;
    int kk = MAX - 1;

    while(l <= MAX*MAX)
    {
        for(int k1 = pk; k1 <= kk; k1++)
        {
            t[pw][k1] = l;
            l++;
        }
        pw++;
        for(int w1 = pw; w1 <= kw ; w1++)
        {
            t[w1][kk] = l;
            l++;
        }
        kk--;
        for(int k2 = kk; k2 >= pk ; k2--)
        {
            t[kw][k2] = l;
            l++;
        }
        kw--;
        for(int w2 = kw; w2 >= pw; w2--)
        {
            t[w2][pk] = l;
            l++;
        }
        pk++;

    }

    wypisz_tab(t);


}
