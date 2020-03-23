#include <iostream>
using namespace std;

int main(){
    int n, prev;
    bool check;
    cout<<"Type number: ";
    cin>>n;

    while(n){
        prev = n%10;
        n /= 10;
        if(prev <= (n%10)){
               check = false;
               break;
           }
    check = true;
    }
    cout<<check;
}
