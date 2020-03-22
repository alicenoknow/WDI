#include <iostream>
using namespace std;

int main()
{
    int x, sum = 1, i = 0;
    cout<<"Podaj x: ";
    cin>>x;

   while(x >= 0)
    {
        x -= sum;
        sum += 2;
        i++;
    }
    cout<<i-1;
}
