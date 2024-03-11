// Valentin Ples grupa 2012
//polinom de grad 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int suma(int, int, int, int, int);

int main()
{
	int a, b, c, d, x;
	printf(" Introduceti coeficientii polinomului de grad 3: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("\n Introduceti valoarea punctului x: ");
	scanf("%d", &x);
	printf("\n Rezultatul sumei este: %d", suma(a, b, c, d, x));
	return 0;
}
int suma(int a, int b, int c, int d, int x)
{
	a *= (x * x * x);
	b *= (x * x);
	c *= x;
	return a + b + c + d;
}