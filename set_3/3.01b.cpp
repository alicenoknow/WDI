#include <iostream>         //without string
using namespace std;

int main(){
    int base = 16;
    int n,k,d = 0;

    cout<<"Type number: ";
    cin>>n;
    int tmp = n;

    while(tmp){
        tmp /= base;
        d++;
    }
    char tab[d];
    int i = 0;

    while(n){
        k = n % base;
        if(k > 9){
            k = k % 10 + (k/10) % 10;
            tab[i] = (char)(k+64);

        }
        else
        tab[i] = (char)(k + 48);
        n /= base;
        i++;
    }
   for(int i = d-1; i>=0; i--)
    cout<<tab[i];
}

