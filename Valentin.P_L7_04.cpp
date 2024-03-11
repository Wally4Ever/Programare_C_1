//calcul factorial
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int factorial (int);

int main()
{
    int n;
	printf("Introduceti n : ");
	scanf("%d", &n);

    printf("\nValoarea finala este %d", factorial(n));
    return 0;
}
int factorial(int x)
{

	int nr = 1, i;
	if (x == 0)
		return 1; // exceptie
	else
	{
		for (i = 1; i <= x; i++)
			nr *= i;
		return nr;
	}
}
