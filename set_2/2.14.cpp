#include <iostream>
using namespace std;

int n,tmp,i;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    tmp = n;

    while(tmp)
    {
        tmp/=10;
        i++;
    }
    tmp = n;
    while(tmp)
    {
        if(tmp%10 == i)
        {cout<<"woohoo";
        break;}
        tmp/=10;
    }
}
