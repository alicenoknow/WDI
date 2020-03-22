#include <iostream>
using namespace std;

const int N = 20;
int t1[N];
int t2[N];

int dodawanko(int t1[N], int t2[N], int idx = 0)    //do t1
{
    if(idx == N)    return 0;
     t1[idx] += t2[idx] + dodawanko(t1,t2, idx+1);
     if(t1[idx] > 9)
     {
         int carry = t1[idx]/10;
         t1[idx] %= 10;
         return carry;
     }
     return 0;

}


int mnozonko(int t1[N], int t2[N], int result[N], int idx = N)
{
    if(idx < 0) return 0;
    result[idx] = t1[idx]*t2[idx];
    if(result[idx] > 9 )
    {
        int carry = result[idx]/10;
         result[idx] %= 10;
         return carry;
    }
    return 0;
}

bool compare(int t1[N], int t2[N])
{

}


int* root(int n)
{
    int root[N];
    int t2[N];

}

void print(int t[N])
{
    for(int i = 0; i < N; i++)
        cout<<t[i]<<" ";
    cout<<endl;
}

int main()
{
    int res[N];
    for(int i = 0; i < N; i++)
    {   t1[i]=t2[i]=res[i]=0;       }
    t1[19] = 6;
    t2[18] = 4;
    print(t1);
    print(t2);
    if(!dodawankoLiczba(t1, 123123))   print(t1);

}
