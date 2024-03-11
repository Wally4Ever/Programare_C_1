//Program de calculare a unui termen la n putere
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int putere (int, int);

int main()
{
    int a, n;
	a=2;
	printf("Introduceti n : ");
	scanf("%d",&n);

	printf("Valoarea finala este %d", putere(a, n));
}
int putere(int a, int n)
{
    if (n==0)
        return 1;

    int p=a;
    for (int i=1; i<n; i++)
	{
		a*=p;
	}
	return a;
}
