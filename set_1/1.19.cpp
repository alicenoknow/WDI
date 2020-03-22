#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int sil = 1;
    int n = 1;
    double e = 1;
    double pre = 0;
    double eps = 10e-5;

    while(true)
    {
        e += 1.0/(sil*n);
        sil *= n;
        n++;
        cout<<"e: "<<e<<endl;
        if((e-pre) < eps)
            break;
        pre = e;
    }
}
