#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,tmp,i = 0;
    cout<<"Type number: ";
    cin>>n;
    i = log10(n)+1;
    while(n){
        if(n%10 == i){
            cout<<"YES";
            break;
        }
        n /= 10;
    }
}
