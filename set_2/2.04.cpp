#include <iostream>
using namespace  std;

int main(){
    int n, x = 0;
    cout<<"Type n: ";
    cin>>n;
   for(int i = 1; i <= n; i *= 2)
        for(int j = i; j <= n; j *= 3)
            for(int k = j; k <= n; k *= 5) x++;
    cout<<x;
}
