#include <iostream>
using namespace std;

bool is_prod_of_Fib(int n){             //checks if n is a product of any two Fibonacci numbers
    int a = 1, b = 1, c, a1, b1, c1;

    while(a*a < n){
            c = a + b;
            a = b;
            b = c;

            if(n%a == 0){
                a1 = a;
                b1 = b;
                c1 = c;
                while(a1<=n){
                    if(a*b1 == n) return true;
                    c1 = a1 + b1;
                    a1 = b1;
                    b1 = c1;
                }
            }
        }
        if(b == n)  return true;
        return false;
}

int main(){
    int n;
    cout<<"Type number: ";
    cin>>n;
    cout<<is_prod_of_Fib(n);
}
