// Valentin Ples grupa 2012
// aria unui cerc sau dreptunghi
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b;
	cout << "Introdu 2 numere intregi: ";
	scanf("%d %d", &a, &b);
	(a == b) ? printf("\n Aria cercului este: %.2f", a * b * 3.14) : printf("\n Aria dreptunghiului este: %d", a * b);
}