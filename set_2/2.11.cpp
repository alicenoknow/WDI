#include <iostream>
using namespace std;

bool is_multi(int k){
    int seq = 2;
    do{
        if(k%seq == 0) return true;
        seq = 3*seq + 1;
    }while(seq <= k);
    return false;
}

int main(){
    int k;
    cout<<"Type k: ";
    cin>>k;
    cout<<is_multi(k);
}
