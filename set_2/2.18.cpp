#include <iostream>
using namespace std;

int n, tmp, sumCz, sumCf, l;

int main()
{
for(int i = 1; i<1000000; i++)
{
    sumCf = 0;
    sumCz = 0;
        tmp = i;

    for(int k = 2; k < i; k++)
    {
        while(tmp%k==0 && tmp>0)
        {
            tmp /= k;
            int j = k;
            while(j)
            {
                sumCz += (j%10);
                j /=10;
            }
        }
    }
    tmp = i;
    while(tmp)
    {
        sumCf += (tmp%10);
        tmp /=10;
    }

    if(sumCf == sumCz)
        cout<<i<<endl;

}

}
