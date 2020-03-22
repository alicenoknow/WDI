#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int const N = 10;

void wypisz(int t[N])
{
    for(int i = 0; i < N; i++)
        cout<<"["<<i<<"]"<<t[i]<<"  ";
    cout<<endl;
}

void wyp_los(int t[N])
{
    srand(time(NULL));
    for(int i = 0; i < N; i++)
        t[i] = rand()%100;
}

bool czyPierwsza(int liczba)
{
    if(liczba < 2)
		return false;

	for(int i = 2; i*i <= liczba; i++)
		if(liczba%i == 0)
			return false;
	return true;
}


bool czyZjebane(int t[N])
{
    int c,a = 1, b = 1;

    while(b < N)
    {
        if(czyPierwsza(t[b]))
            return false;
        else t[b] = 0;
        c=a+b;
        a=b;
        b=c;
    }

    for(int i = 0; i < N; i++)
    {
        if(t[i] != 0)
            if(czyPierwsza(t[i]))
                return true;
    }
}

int main()
{
    int t[N];

    wyp_los(t);
    wypisz(t);

    cout<<czyZjebane(t);
}

