#include <iostream>
using namespace std;
const int LIMIT = 100;

int main(){
    int a,b,c;
    for(int m = 2; m < LIMIT; m++){
        a = 2*m;
        b = m*m - 1;
        c = m*m + 1;
        cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
    }
}
