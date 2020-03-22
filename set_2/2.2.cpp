#include <iostream>
using namespace std;

int seqA(int n){             //checks if x is a multiple of any element
    return n*n+n+1;         // of sequence A(n)=n*n+n+1
}

bool is_multi(int x){
    int n = 1;
    while(seqA(n) <= x){
        if(x%seq(n) == 0) return true;
        n++;
    }
    return false;
}

int main(){
    int x;
    cout<<"Type number: ";
    cin>>x;
    cout<<is_multi(x);
}
