#include <iostream>
using namespace std;

const int N = 6;

void sumEI(int t[N], int sumE, int sumI, int &maxS, int i)
{
    if(i == N && (sumI == sumE))
        if(sumE > maxS)
            maxS = sumE;
    for(int j = i; j < N; j++)
    {
        sumEI(t,sumE + t[j], sumI + j, maxS, j+1);
        sumEI(t,sumE, sumI, maxS, j+1);
    }

}

int main()
{
    int t[N] = {1,7,3,5,11,2};
    int maxS = 0;

    sumEI(t,0,0,maxS,0);

    cout<<maxS;
}
