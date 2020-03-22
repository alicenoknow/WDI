#include <iostream>
using namespace std;

 int main()
 {
    int a,b,c;
    a = 40;
    b = 12;
    while(a<10000)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
 }
