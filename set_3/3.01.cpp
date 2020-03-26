#include <iostream>
using namespace std;

int main(){
    int base = 2, n;
    string s = "";
    string digits = "0123456789ABCDEF";

    cout<<"Type number: ";
    cin>>n;

    while(n){
        s = digits[(n%base)] + s;
        n /= base;
    }
    cout<<s;
}
