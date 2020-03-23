#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if(n <  4) return n > 1;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    int p = 3;

    while(p*p<=n)
    {
        if(n%p == 0)
            return false;
        p += 2;

        if(n%p == 0)
            return false;
        p += 4;
    }
    return true;
}

void create_num(int n1, int n2, int res, int pow, int &i){
    if(n1 == 0 && n2 == 0){
            if(is_prime(res))   i++;
            return;
    }
    if(n1 != 0) create_num(n1/10, n2, res + (n1%10)*pow, pow*10, i);
    if(n2 != 0) create_num(n1, n2/10, res + (n2%10)*pow, pow*10, i);
}

int main(){
    int n1 = 567, n2 = 1234;
    int i = 0;
    create_num( n1, n2, 0, 1, i);
    cout<<i;

}
