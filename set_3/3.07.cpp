#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
const int N = 10;

void random_array(int tab[N]){
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        tab[i] = 1 + rand()%1000;
        cout<<tab[i]<<"  ";
    }
    return;
}

bool has_odd_digit(int n){
    bool odd = false;
        while(n){
            int dig = n % 10;
            if(dig % 2 == 1) odd = true;
            n /= 10;
        }
    return odd;
}

bool check_array(int tab[N]){
    for(int i = 0; i < N; i++)
        if(!has_odd_digit(tab[i]))  return false;
    return true;
}

int main(){
    int tab[N];
    random_array(tab);
    cout<<endl<<"Result: "<<check_array(tab);
}
