#include<iostream>
#include <math.h>

using namespace std;

int tab[9];
int a,b;

int main()
{
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;

    while(a)
    {
        tab[a%10]++;
        a/=10;
    }

    while(b)
    {
        tab[b%10]--;
        b/=10;
    }

    for(int i = 0; i< 10; i++)
    {
        if(tab[i] != 0)
            {
                cout<<"chuj kurwa";
                break;
            }
        else if(i == 9)
            cout<<"wooohooooo";

    }






}
