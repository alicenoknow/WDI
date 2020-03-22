#include <iostream>
using namespace std;

const int CURR_YEAR = 2020;

int main()
{
    int a, b, c;
    int minA = CURR_YEAR, minB;
    a = b = c = minB = 0;

    for(int k = 0; k <= CURR_YEAR/2; k++)
    {
        for(int l = 1; l <= CURR_YEAR/2; l++)
        {
            a = k;
            b = l;

           while(a <= CURR_YEAR)
            {
                if(a == CURR_YEAR)
                {
                    if(k + l < minA + minB)
                    {
                        minA = k;
                        minB = l;
                    }
                    break;
                }
                c = a + b;
                a = b;
                b = c;
            }
        }
    }
 cout<<"a:  "<<minA<<"   b: "<<minB;
}
