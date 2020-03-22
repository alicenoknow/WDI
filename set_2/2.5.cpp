#include <iostream>
#include <math.h>
using namespace std;

long long n, cop,j,d;
long long sil = 1;

int main(){
    cout<<"Podaj N: ";
    cin>>n;

    cop = n;
    while(cop){
        cop/=10;
        j++;
    }
    d = pow(10,j);

    for(int i = 1; i <= n; i++){
        sil *= i;
        while(sil%10 == 0)
                sil /= 10;
        sil = sil%d;
    }
    cout<<"ostatnia: "<<sil%10;
}
