#include <iostream>
using namespace std;

int compare(int a, int b){
    bool compare[16];
    for(int base = 2; base <= 16; base++){
        int n1 = a, n2 = b;
        bool done = true;
        for(int i = 0; i < 16; i++) compare[i] = false;

        while(n1){
           compare[(n1%base)] = true;
            n1 /= base;
        }
        while(n2){
           if(compare[(n2%base)]){
                done = false;
                break;
           }
            n2 /= base;
        }
        if(done)  return base;
    }
    cout<<"Such a base does not exist!"<<endl;
    return -1;
}


int main(){
   int n1 = 123;
   int n2 = 522;
   cout<<compare(n1,n2);

}
