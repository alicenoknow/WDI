#include <iostream>
using namespace std;

int main(){
    int n, fact = 1;
    cout<<"Type precision: ";
    cin>>n;
    int e[n],s[n];
    for(int i = 0; i < n; i++) e[i] = s[i] = 0;
   e[0] = 1;
   s[0] = 1;

 while(true){
    bool over = true;
    int carry = 0;
    fact++;

     for(int j = n-1; j >= 0; j--){
        if(s[j] > 0) over = false;
        int tmp = s[j] + e[j] + carry;
        e[j] = tmp % 10;
        carry = tmp / 10;
     }
    if(over) break;
    int r = 0;
    for(int i = 0; i < n; i++){
         int tmp = 10 * r + s[i];
         s[i] = tmp / fact;
         r = tmp % fact;
     }
 }
cout<<e[0]<<".";
for(int i = 1; i < n; i++)  cout<<e[i];
}
