#include <iostream>
 using namespace std;

 int a = 1, b = 1, c;

 int main()
 {
    while(a<1000000)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
 }
