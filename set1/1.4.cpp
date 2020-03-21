#include <iostream>
using namespace std;

int main()
{
    int x, suma = 1, i = 0;
    cout<<"Podaj x: ";
    cin>>x;

   while(x>=0)
    {
        x -= suma;
        suma += 2;
        i++;
    }

    cout<<endl<<i-1;

}
