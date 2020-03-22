#include <iostream>
using namespace std;

const int N = 10;

czyMaxMin(int t[N])
{
    int minn = t[0];
    int maxx = t[0];
    int lmin = 0, lmax = 0;

    for(int i = 1; i < N; i++)
    {
        if(t[i] > maxx) maxx = t[i];
        else if(t[i] < minn)  minn = t[i];
    }

    for(int i = 0; i < N; i++)
    {
        if(t[i] == minn) lmin++;
        else if(t[i] == maxx) lmax++;
    }
    if(lmin > 1 || lmax > 1) return false;
    else return true;
}

int main()
{

}
