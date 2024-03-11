// Valentin Ples grupa 2012
// afisare biti
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	unsigned char a;
	cout << "Introdu un caracter:";
	cin >> a;
	while (a)
	{
		printf("%d", a & 1);
		a >>= 1;
	}
}