#include <iostream>
using namespace std;

int main(){
    double sum = 0;
    double a = 1;
    int n = 10000;
    double k;
    cout<<"Type k: ";
    cin>>k;
    double pp = (k-1)/n;

 double sr = a + (k-a)/(2*n);

  for(int i=0;i<n;i++)
    {
        sum += (1/sr)*pp;
        sr+=pp;
    }
    cout<<" Pole: "<< sum;
}
