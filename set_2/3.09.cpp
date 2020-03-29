#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int N = 10;

void random_array(int tab[N]){
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        tab[i] = 1 + rand()%100;
        cout<<tab[i]<<"  ";
    }
    return;
}

int get_div(int &n){
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            while(n % i == 0) n/= i;
            return i;
        }
    }
    return -1;
}

bool is_there_a_way(int tab[N], int k){
    cout<<"k: "<<k;
    if(k == N-1)    return true;
    if(k > N-1)     return false;
    int tmp = tab[k];
    while(tmp){
        int step = get_div(tmp);
        cout<<"tmp: "<<tmp<<endl;
        if(step) return is_there_a_way(tab, k+step);
    }
    return false;
}

int main(){
    int tab[N];
    random_array(tab);
    cout<<is_there_a_way(tab, 0);
}
