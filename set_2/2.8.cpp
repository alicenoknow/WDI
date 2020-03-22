#include <iostream>
using namespace std;

int main(){
    int a,b,n;

    cout<<"Type a: ";
    cin>>a;
    cout<<"Type b: ";
    cin>>b;
    cout<<"Type n: ";
    cin>>n;
    cout<<a/b<<".";

    for(int i = 0; i < n; i++){
        a = a%b;
        a *= 10;
       cout<<a/b;
    }
}
