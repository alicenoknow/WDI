#include <iostream>
using namespace std;

int main(){
    int x,res = 0,tmp;
    int base = 10;
    bool palindrome= true;
    cout<<"Type x: ";
    cin>>x;
    tmp = x;
    while(base > 0){
        while(tmp){
            res = res*10 + tmp%base;
            tmp /= base;
        }
        tmp = x;
        if(base == 10 && res == x)   cout<<x<<" is a palindrome base(10)"<<endl;
        else{
            while(tmp){
                palindrome = true;
                if(tmp%2 != res%10) palindrome = false;
                tmp /= 2;
                res /= 10;
            }
            if(palindrome)  cout<<x<<" is a palindrome base(2)"<<endl;
        }
        base -= 8;
    }
}
