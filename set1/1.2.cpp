#include <iostream>
using namespace std;

int a, b, c;
int minA = 2019, minB;

int main()
{

    for(int k = 0; k < 1010; k++)
    {
        for(int l = 1; l < 1010; l++)
        {   a=k;
            b=l;
           while(a<2020)
            {
                if(a==2019)
                {
                    if(k+l<minA+minB)
                    {
                        minA = k;
                        minB = l;
                    }
                    break;
                }
                c=a+b;
                a=b;
                b=c;
            }

        }


    }

 cout<<"a:  "<<minA<<"   b: "<<minB;

}
