#include <iostream>
#include <math.h>

using namespace std;

int n = 1;
int suma;
int p,sq;

int main()
{

    while(n<1000000)
    {
        suma = 1;
        p = 2;
        n++;
        sq = sqrt(n);

        while(p<=sq)
        {
            if(n%p==0)
                suma+=p+(n/p);

            p++;
        }
        if(p==sq)
                suma-=p;

        if(suma==n)
                cout<<"woohoo "<<n<<endl;
    }

}
