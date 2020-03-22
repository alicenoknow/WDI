#include <iostream>
using namespace std;

int pod = 16;
int n,k;
string s;




int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    while(n){

        k = n%pod;
        if(k>9){
            k = k%10 + (k/10)%10;
            s = (char)(k+64) + s;

        }
        else
        s = (char)(k+48) + s;
        n /= pod;

    }

    cout<<s;
}

