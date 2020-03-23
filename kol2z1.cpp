#include <iostream>
using namespace std;
int l7 (int a){
    int l=0;
    while (a!=0){
        if((a%7)%2==1)
            l++;
        a/=7;
    }
    return l;
}
//Nie pamietam jak bylo ale zkaladam MAX1>MAX2>=0
const int MAX1=4;
const int MAX2=2;
int l=0;
bool SpinMeRound(int tab1[MAX1][MAX1],int tab2[MAX2][MAX2]){
    for (int i=0; i<=(MAX1-MAX2) ; i++){
        for ( int j=0; j<=(MAX1-MAX2);j++){
            for ( int p=i; p<(i+MAX2);p++){
                for (int q=j; q<(j+MAX2);q++){
                    if(l7(tab1[p][q])==l7(tab2[p-i][q-j])) l++;
                    cout<<"p: "<<p<<" q: "<<q<<"  p-i: "<<p-i<<" q-j: "<<q-j<<endl;
                }
            }
            cout<<l<<endl;
            if (l*1000/(MAX2*MAX2)>=330) return true;
                l=0;
        }
    }
    return false;
}
int main (){
//sprawdzamy czy dzia³a
int tab1[MAX1][MAX1],tab2[MAX2][MAX2];
for ( int i=0; i< MAX1;i++){
    for (int j=0; j<MAX1;j++){
        cin>>tab1[i][j];
    }
}
for ( int i=0; i< MAX2;i++){
    for (int j=0; j<MAX2;j++){
        cin>>tab2[i][j];
    }
}
if(SpinMeRound(tab1,tab2)==true) cout<<"Good";
else cout<<"Bad";
}
