#include <iostream>
using namespace std;

bool is_subs(int x);    //function checks if there is a common subsequence of Fibonacci numbers with given sum

int main()
{
    int x;
    cout<<"Type sum: ";
    cin>>x;
    cout<<(is_subs(x));
}

bool is_subs(int x)
{
    if(x == 0)
        return 1;

    int a = 1, b = 1, c, sum = 0;

    while(x >= b)
    {
        sum += a;
        if(x == b)
            return 1;
        c = a + b;
        a = b;
        b = c;
    }
    a = 1;
    b = 1;

   do{
    if(sum == x)    return 1;
        sum -= a;
        c = a + b;
        a = b;
        b = c;
    }while(sum >= x);

    return 0;
}

