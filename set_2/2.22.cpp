#include <iostream>
using namespace std;
const int LIMIT = 20;

int main(){
    int res[LIMIT] = {NULL};
    int rim[LIMIT] = {NULL};
    int a = 16, b = 11, i = 0;
    cout<<a/b<<".";
    a %= b;
    a *= 10;
    res[0] = a;
    while(a){
        rim[i] = a/b;
        a %= b;
        a *= 10;
        i++;
        for(int j = 0; j < i; j++){
            if(a == res[j]){
                for(int k = 0; k < i; k++){
                    if(k == j) cout<<"(";
                    cout<<rim[k];
                }
                cout<<")";
                return 0;
            }
        }
        res[i] = a;
    }
}
