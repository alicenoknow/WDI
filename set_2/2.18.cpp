#include <iostream>
using namespace std;
const int LIMIT = 1000000;

int main(){
    int n, tmp, sumCz = 2, sumCf = 0, l;

    for(int i = 2; i < LIMIT; i++){
        tmp = i;
        for(int k = 2; k < i; k++){
            while(tmp%k == 0 && tmp > 0){
                tmp /= k;
                int j = k;
                while(j){
                    sumCz += (j%10);
                    j /=10;
                }
            }
        }
        tmp = i;
        while(tmp){
            sumCf += (tmp%10);
            tmp /=10;
        }
        if(sumCf == sumCz) cout<<i<<endl;
        sumCf = 0;
        sumCz = 0;
    }
}
