#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, d = 0;
    cout<<"Type number: ";
    cin>>n;

    d = sqrt(n);

    if(n%d == d)
        cout<<d<<"*"<<d;
    else
        while(n%d != 0)
            d++;
    cout<<d<<"*"<<n/d;
}
