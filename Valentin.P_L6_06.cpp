// Valentin Ples grupa 2012
// valoarea fiecarui octet al unui intreg
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Introdu un intreg:";
	cin >> a;
	while (a)
	{
		printf("\nValoarea octetului este: %d", a & 0xff);
		a=(a >> 8);
	}
}