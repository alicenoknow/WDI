#include <iostream>
using namespace std;

int main(){
    int n, r = 0, tmp, d = 1;
    int result[2600];                                        // approximation of log10(1000!) - number of digits in 1000!
    for(int i = 1; i < 2600; i++) result[i] = 0;
    result[0] = 1;
    cout<<"Type number: ";
    cin>>n;

    for(int i = 2; i <= n; i++){
        for(int j = 0; j < d; j++){
            tmp = result[j] * i + r;
            result[j] = tmp % 10;
            r = tmp / 10;
        }
        while(r){
            result[d] = r % 10;
            d++;
            r /= 10;
        }
    }
    for(int i = d-1; i >= 0; i--){
        cout<<result[i];
    }
}
