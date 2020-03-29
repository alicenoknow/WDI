#include <iostream>
using namespace std;

int main(){
    int n;
    int tab[10] = {0};
    while(true){
        cin >> n;
        if(!n) break;
        if(n > tab[0]){
            tab[0] = n;
            for(int i = 0; i < 9; i++)
                if(tab[i] > tab[i+1])
                    swap(tab[i+1], tab[i]);
        }
    }
    cout<<tab[0];
}
