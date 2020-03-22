#include <iostream>
using namespace std;

int pod = 16;
int n,k,d;
string s;




int main()
{
    cout<<"Podaj liczbe: ";
    cin>>n;

    int tmp = n;

    while(tmp)
    {
        tmp /= pod;
        d++;
    }

    char tab[d];
    int i = 0;

    while(n){

        k = n%pod;
        if(k>9){
            k = k%10 + (k/10)%10;
            tab[i] = (char)(k+64);

        }
        else
        tab[i] = (char)(k+48);
        n /= pod;
        i++;

    }

   for(int i = d-1; i>=0; i--)
    cout<<tab[i];
}

