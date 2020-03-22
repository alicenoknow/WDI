#include <iostream>
using namespace std;
const int N = 10;
int t1[N], t2[N];
int s1[N], s2[N];

bool warunek()

bool wycinanko(int t1[N], int t2[N])
{
    s1[0] = t1[0];
    s2[0] = s2[0];

    for(int i = 1; i < N; i++)
    {
       s1[i] = s1[i-1] + t1[i];
       s2[i] = s2[i-1] + t2[i];
    }

    for(int i = 1; i < 24 && i < N; i++)
    {

    }
}

int main()
{
    for(int i = 0; i < N; i++)
    {
        t1[i] = i+1;
        t2[i] = 3*i%8;
    }




}
