#include <iostream>
using namespace std;

bool czySuma(int x);
int x;

int main()
{

    cout<<"Podaj x: ";
    cin>>x;
cout<<(czySuma(x));

}

bool czySuma(int x)
{
    if(x==0)
        return 0;
    int a = 1, b = 1, c , suma = 0;
    while(x>=b)
    {
        suma += a;
        if(x == b)
            return 1;
        c=a+b;
        a=b;
        b=c;

    }

    a = 1;
    b = 1;


   do{
    if(suma == x)
            return 1;
        suma -= a;
        c=a+b;
        a=b;
        b=c;
    }while(suma > 0);

    return 0;
}

