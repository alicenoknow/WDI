#include<iostream>
using namespace std;

bool same_digits(int a, int b){
    int digits[10];
    for(int i = 0; i < 10; i++) digits[i] = 0;
     while(a){
        digits[a%10]++;
        a/=10;
    }
    while(b){
        digits[b%10]--;
        b/=10;
    }
    for(int i = 0; i < 10; i++){
        if(digits[i] != 0) return false;
    }
    return true;
}

int main(){
    int a,b;
    cout<<"Type a: ";
    cin>>a;
    cout<<"Type b: ";
    cin>>b;
    cout<<same_digits(a,b);
}
