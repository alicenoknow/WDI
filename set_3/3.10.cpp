#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int N = 100;

void random_array(int tab[N]){
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        tab[i] = 1 + rand()%N;
        cout<<tab[i]<<"  ";
    }
    return;
}

void print_arr(int tab[N]){
        for(int i = 0; i < N; i++)
        cout<<tab[i]<<"  ";
}

int main(){
    int maxD = 0, idx_max = 0, d = 1;
    int tab[N];
    random_array(tab);
    print_arr(tab);

    for(int i = 0; i < N-1; i++){
        if(tab[i] < tab[i+1])  d++;
        else{
            if(d>maxD)
                {maxD = d; idx_max = i;}
            d = 1;
        }
    }
    cout<<"Max length: "<<maxD<<"  beginning idx: "<<idx_max;
}
