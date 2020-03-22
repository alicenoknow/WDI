#include <iostream>
using namespace std;

const int N = 10;

bool _hopki(int t[N], int idx, int &hop)
{

    cout<<"idx: "<<idx;
    cout<<"  hop: "<<hop<<endl;
    if(idx == N-1)  return true;

    int l = t[idx];

    for(int i=2; i<t[idx]&& (idx+i) < N; i++)
    {
        if(l%i==0)
        {
            hop++;
            if(_hopki(t,idx+i,hop))   return true;
            hop--;
            while(l%i==0)   l /= i;
        }
    }

    return false;
}

int hopki(int t[N], int idx)
{
    int hop = 0;
    if(_hopki(t,idx, hop)) return hop;
    return -1;
}

int main()
{

    int t[N] = {6,1,6,1,3,4,3,4,1,2};
    bool finish = false;
    cout<<hopki(t,0);

}

