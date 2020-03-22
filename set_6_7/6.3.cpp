#include <iostream>
#include <string>
using namespace std;

const int N = 5;
int tab[N] = {1,3,5,7,8};

void waga(int m, int i, string pusta, string zlotko)
{
    if(i == N)
    {   if(m == 0)
        {   cout<<"Pusta: ";
            for(int i = 0; i < N; i++)
                if(pusta[i] == '1')  cout<<tab[i]<<"  ";
            cout<<endl<<"Zlotko: ";
             for(int i = 0; i < N; i++)
                if(zlotko[i] == '1')  cout<<tab[i]<<"  ";
        cout<<endl<<endl;
        }
    }
    else
    {
        waga(m-tab[i], i+1, pusta + "1", zlotko + "0");
        waga(m, i+1, pusta + "0", zlotko + "0");
        waga(m+tab[i], i+1, pusta + "0", zlotko + "1");
    }
}

int main()
{
    waga(16,0,"","");
}
