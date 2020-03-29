#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int N = 10;

void random_array(int tab[N]){
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        tab[i] = 1 + rand()%N;
        cout<<tab[i]<<"  ";
    }
    return;
}

bool is_possible(int tab[N], int idx){
    if(idx == N-1) return true;
    if(idx >= N) return false;
    int tmp = tab[idx];
    int div = 2;
    while(tmp && div <= tmp){
        if(tmp % div == 0){
            while(tmp%div == 0) tmp /= div;
            if(is_possible(tab, idx + div)) return true;
        }
        div++;
    }
    return false;
}

int main(){
    int tab[N] = {2,1,2,1,2,1,3,1,2,1};
    cout<<is_possible(tab, 0);

}
