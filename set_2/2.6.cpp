#include <iostream>
using namespace std;

int i, l,x, poz;
int dziel = 7;
int bin,nowy;

int main()
{
    cout<<"Podaj liczbe: ";
    cin>>x;

    int tmp_x = x;

    while(tmp_x)
    {
        tmp_x /=10;
        l++;
    }
cout<<"l: "<<l<<endl;

    for(int k = 1; k < (1<<l); k++ )
    {   tmp_x = x;
        nowy = 0;
        bin = k;
        poz = 1;

      while(bin)
        {

            if(bin%2 == 1)
            {
                nowy += tmp_x%10*poz;
                poz *= 10;
            }

            tmp_x /= 10;
            bin /= 2;

        }

        if(nowy%dziel==0)
               {
                   i++;
                   cout<<nowy<<endl;
               }

    }

    cout<<i;
}
