#include <iostream>
using namespace std;
bool czyPierwsza(int n){
        if(n < 2) return false;
        if(n == 2 || n == 3)    return true;
        if( n%2 == 0  || n%3 == 0)  return false;
        int p = 3;

    while(p*p<=n)
    {
        if(n%p == 0)
            return false;
        p+=2;

        if(n%p == 0)
            return false;
        p+=4;

    }
    return true;
}

void _ileLiczbP(int a, int b, int liczba, int &ile){
    if(a == 0 && b == 0){
        if(czyPierwsza(liczba))
        {cout<<liczba<<endl;
            ile++;}
    }
    else{
            if(a > 0)
        _ileLiczbP(a/10, b, (liczba*10 + a%10), ile);
            if(b > 0)
        _ileLiczbP(a, b/10, (liczba*10 + b%10), ile);
    }
}

int ileLiczbP(int a, int b){
    int ar = 0;
    int br = 0;
    while(a){
        ar = 10*ar + a%10;
        a /= 10;
    }
    while(b){
        br = 10*br + b%10;
        b /= 10;
    }

    cout<<"ar: "<<ar<<" br: "<<br<<endl;
    int ile = 0;
    _ileLiczbP(ar,br, 0, ile);

    return ile;
}

int main(){
    cout<<"Ile: "<<ileLiczbP(123,256);
}
