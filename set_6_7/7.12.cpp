#include <iostream>
#include <string>
using namespace std;

void podziel(int n, int popn, string s = "")
{
    if(n == 0){
        cout<<s<<endl;
    }
    for(int i = popn; i <= n; i++)
        {
            char a = i+48;
            podziel(n-i, i, s+" " +a);
        }
}
int main()
{
    int n = 5;
    podziel(n,1);

}
