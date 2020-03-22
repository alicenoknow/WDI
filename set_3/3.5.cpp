#include <iostream>
#include <math.h>

using namespace std;

int n;

int main()
{
   cout<<"Podaj dokladnosc: ";
   cin>>n;

int e[n];
int s[n];
int sil = 1;

for(int i = 0; i < n; i++) {e[i] = 0; s[i] = 0;}

   e[0] = 1;
   s[0] = 1;


 while(true)
{
    bool b = true;
    int p = 0;
    sil ++;

     for(int j = n-1; j>=0; j--)
     {
        if(s[j]>0) b = false;
        int tmp = s[j]+e[j]+p;
        e[j] = tmp%10;
        p = tmp/10;
     }

    if(b) break;
    int r = 0;

     for(int i = 0; i<n; i++)
     {
         int tmp = 10*r+s[i];
         s[i] = tmp/sil;
         r = tmp%sil;

     }
 }
cout<<e[0]<<".";
for(int i = 1; i<n; i++)
    cout<<e[i];

}
