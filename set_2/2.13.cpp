#include <iostream>
using namespace std;

void print_av(int* arr){
    float av = 0;
    for(int i = 0; i < 4; i++)  av += arr[i];
    av /= 4.0;
    cout<<"Equal to av: "<<endl;
    for(int i = 0; i < 4; i++)  if(arr[i] == av)    cout<<arr[i]<<"  ";
    cout<<endl;
}

int main(){
    int arr[4] = {0,0,0,0};
    int n,i = 0;
    while(true){
        cin>>n;
        if(!n) break;
        arr[i % 4] = n;
        if(i > 2){
            print_av(arr);
        }
        i++;
    }
}
