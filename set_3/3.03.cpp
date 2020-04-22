#include <iostream>
using namespace std;

int main(){
    int const LIMIT = 8000;
    bool div[LIMIT];
    int w, l = 0;
    for(int i = 0; i < LIMIT; i++) div[i] = false;
    for(int i = 2; i*i <= LIMIT; i++){
        if(!div[i]){
            w = i*i;
            while(w < LIMIT){
                div[w] = true;
                w += i;
            }
        }
    }
    for(int i = 2; i < LIMIT; i++){
        if(!div[i]){
            cout << i << endl;
            l++;
        }
    }
    cout<<endl<<l;
}
