#include <iostream>
using namespace std;

const int LIMIT = 10000;

float seq(int n){
    return (n%2)*(3*n+1)+(1-n%2)*n/2;
}


int main()
{
    int maxx = 0;
    int n_max = 0;
    int n = 2;

    while(n <= LIMIT)
    {
        int tmp = n;
        int i = 0;
        while(tmp != 1)
        {
            tmp = seq(tmp);
            i++;
        }
        if(i > maxx)
            {
                maxx = i;
                n_max = n;
            }
        n++;
    }
    cout<<n_max;
}
