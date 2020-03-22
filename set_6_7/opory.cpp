#include <iostream>
using namespace std;

const int N = 5;
int t[N];

bool oporki(int t[N], int kQ, int R, int idx)
{
    cout<<"R: "<<R<<endl;
    cout<<"idx: "<<idx<<endl;
    if(R == kQ) return true;
    if(idx == N) return false;
    if(oporki(t, kQ, R + t[idx], idx+1) || oporki(t, kQ, R + (1/t[idx]), idx+1) || oporki(t, kQ, R, idx+1)) return true;
    return false;
}


int main()
{
    for(int i = 0; i < N; i++)  t[i] = i+4;
    int kQ = 11;

    cout<<oporki(t,kQ,0,0);
}
