#include <iostream>
using namespace std;


int main(){
int i = 0, l =0, x, pos = 0, div = 7, bin = 0, new_num = 0;
    cout<<"Type number: ";
    cin>>x;
int tmp_x = x;

    while(tmp_x){
        tmp_x /=10;
        l++;
    }
    for(int k = 1; k < (1<<l); k++){   tmp_x = x;
        new_num = 0;
        bin = k;
        pos = 1;

      while(bin){

            if(bin%2 == 1){
                new_num += tmp_x%10*pos;
                pos *= 10;
            }
            tmp_x /= 10;
            bin /= 2;
        }
        if(new_num%div == 0){
            i++;
            cout<<new_num<<endl;
        }
    }
    cout<<"How many: "<<i;
}
