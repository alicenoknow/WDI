#include <iostream>

using namespace std;

int maxx = 0;
int n_max;

float ciag(int n)
{
    return (n%2)*(3*n+1)+(1-n%2)*n/2;
}


int main()
{
    int n = 2;

    while(n<=10000)
    {
        int tmp = n;
        int i = 0;
        while(tmp != 1)
        {
            tmp = ciag(tmp);
            i++;
        }

        if(i>maxx)
            {
                maxx = i;
                n_max = n;
            }


        n++;
    }

    cout<<n_max;
}
