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

bool has_only_odd_digit(int n){
        while(n){
            int dig = n % 10;
            if(dig % 2 == 0){
                return false;
            }
            n /= 10;
        }
    return true;
}

bool check_array(int tab[N]){
    for(int i = 0; i < N; i++)
        if(!has_only_odd_digit(tab[i]))  return true;
    return false;
}

int main(){
    int tab[N];
    random_array(tab);
    cout<<endl<<check_array(tab);
}
