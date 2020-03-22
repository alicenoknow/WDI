#include <iostream>
using namespace std;

const int N = 5;


void wypisz(int t[N][N])
{
    for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            cout<<t[i][j]<<"  ";
            cout<<endl;
        }
    cout<<endl<<endl;
}

bool mozliwe(int t[N][N], int i, int w, int k, int &nk, int &nw)
{
    int dx[8] = {1,2,2,1,-1,-2,-2,-1};
    int dy[8] = {-2,-1,1,2,2,1,-1,-2};

    nk = k+dx[i];
    nw = w+dy[i];

    return (nk >= 0 && nk < N && nw >= 0 && nw < N && t[nw][nk] == 0);
}
void skok(int t[N][N], int w, int k, bool &koniec, int n = 1)
{
    int nk, nw;
    t[w][k] = n;
    if(n == N*N)
    {
        wypisz(t);
        koniec = false;
    }
    else
    {
        for(int i = 0; i < 8 && koniec == true; i ++)
            if(mozliwe(t,i,w,k, nk, nw))
                 skok(t,nw,nk,koniec,n+1);
    }
    t[w][k] = 0;
}

int t[N][N] = {0};

int main()
{
    bool k = true;
    skok(t,0,0,k);
}
