#include <iostream>
using namespace std;

int main(){
    int pod = 16, n, k;
    string s = "";
    cout<<"Type number: ";
    cin>>n;

    while(n){
        k = n % base;
        if(k > 9){
            k = k % 10 + (k/10)%10;
            s = (char)(k + 64) + s;
        }
        else
        s = (char)(k + 48) + s;
        n /= base;
    }
    cout<<s;
}

