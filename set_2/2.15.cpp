#include <iostream>
using namespace std;

int main(){
    int n = 15672;
    int last = n%10;
    bool uniq = true;
    n /= 10;
    while(n){
        if(n%10 == last){
            uniq = false;
            break;;
        }
        n /= 10;
    }
    cout<<uniq;
}
