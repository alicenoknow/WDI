#include <iostream>
using namespace std;

int main(){
    int n,tmp,i = 0;
    cout<<"Type number: ";
    cin>>n;
    tmp = n;
    while(tmp){
        tmp /= 10;
        i++;
    }
    tmp = n;
    while(tmp){
        if(tmp%10 == i){
            cout<<"YES";
            break;
        }
        tmp /= 10;
    }
}
