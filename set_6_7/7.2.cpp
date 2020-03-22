#include <iostream>
using namespace std;

const int N = 5;

bool czyPierwsza(int t[N], int p, int k)
{
    int liczba = 0;
    int pot = 1;
    if(t[k] == 0) return false;

    for(int i = k; i >= p; i--)
    {
        liczba += t[i] * pot;
        pot *= 2;
    }

    if(liczba < 2)
		return false;

	for(int i = 2; i*i <= liczba; i++)
		if(liczba%i == 0)
			return false;
	return true;
}

void podzial(int t[N], int p, bool &koniec)
{
    int i,k;
    bool wypis = false;
    if(koniec)    return;
    if(p == N)
    {
        cout<<"wooohooo"<<endl;
        koniec = true;
        return;
    }
    if(t[p] == 0)   return;
    for(i = p+1; i < N && i-p && !koniec <= 30; i++)
    {
        if(czyPierwsza(t,p,i))
            podzial(t,i+1,koniec);

        if(koniec && !wypis)
        {
            for(k = i; k >= p; k--)
                cout<<t[k];
            cout<<"  ";

            if(k == -1)  wypis = true;
        }

    }

}

int main()
{
    int t[N] = {1,1,1,0,1};

    bool koniec = false;

    podzial(t,0,koniec);

}
