#include <iostream>
using namespace std;


int main(){
    int b = 2, a = 0, a_prev;
    int i = 0;
    int n = 0;
    cin>>n;
    while(n == a){
        cout<<"B: "<<b<<endl;
        if(i == 0){
            a = 1;
            a_prev = 0;
            b = b + 2*a_prev;
        }
        else{
            int tmp = a;
            a = a - b*a_prev;
            a_prev = tmp;
            b = b + 2*a_prev;
        }
        cin>>n;
        i++;
    }
}
