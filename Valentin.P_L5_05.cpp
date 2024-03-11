// Valentin Ples grupa 2012
// numarul de zerouri in reprezentare binara
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int zero(int);

int main()
{
	int a;
	cout << " Introdu un intreg:";
	cin >> a;
	printf("\n Numarul contine %d zerouri in reprezentarea sa binara", zero(a));
}
int zero(int a)
{
	int nr = 0;
	while (a)
	{
		if (!(a & 1))
			nr++;
		a >>= 1;
	}
	return nr;
}