#include <iostream>
using namespace std;

const int N = 25;

float urki()
{
    float p1 = 1;
    for(int i = 365; i > 365-N; i--)
    {
        p1 *= (i*1.0)/365;
    }
    return 1-p1;
}

int main()
{
    cout<<urki();
}
