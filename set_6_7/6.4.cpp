#include <iostream>
using namespace std;

#define N 6

bool prime(int n) {
	for(int i = 2; i <= n; i++) { //tu powinno byæ sqrt
		if(n%i == 0)
			return false;
	}
	return true;
}

int waga(int n) {
	int w = 0;
	bool flag = false;
	for(int i = 2; i <= n; i++) {
		if(!prime(i))
			continue;
		while(n % i == 0) {
			flag = true;
			n /= i;
		}
		if(flag)
			w++;
		flag = false;
	}
	return w;
}

bool rekurwaga(int w[N], int a = 0, int b = 0, int c = 0, int pos = N-1) {
	if(pos < 0)
		return a == b && b == c;
	return rekurwaga(w, a+w[pos], b, c, pos-1) || rekurwaga(w, a, b+w[pos], c, pos-1) || rekurwaga(w, a, b, c+w[pos], pos-1);
}

bool beginWaga(int w[N]) {
	for(int i = 0; i < N; i++)
		w[i] = waga(w[i]);
	return rekurwaga(w);
}

int main()
{
    int t[N] = {1,2,3,4,5,6}; //0,1,1,1,1,2

    cout<<beginWaga(t);
}
