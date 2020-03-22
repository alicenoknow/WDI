#include <iostream>

using namespace std;

int x;
int n = 1;

int a(int n)
{
    return n*n+n+1;
}

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>x;

    while(a(n)<=x)
    {
        if(x%a(n) == 0)
        {
            cout<<"woohoo";
            break;
        }
        n++;
    }


}
