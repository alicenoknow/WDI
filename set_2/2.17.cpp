#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num, N = 0, sum = 0;
    cout<<"Type number: ";
    cin>>num;
    int tmp = num;

    while(tmp){
        N++;
        tmp /=10;
    }
    tmp =  num;

    for(int i = 0; i < N; i++){
            sum += (pow(tmp%10, N));
            tmp /= 10;
    }
    cout<<(sum == num);
}
