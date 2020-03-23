#include <iostream>
using namespace std;

int main(){
    int n, a = 1, b = 1, c;
    cout<<"Type number: ";
    cin>>n;

    if(n <= 8)  cout<<9;
    else{
        while(b < n){
        c = a + b;
        a = b;
        b = c;
    }
    cout<<b+1;
    }
}
