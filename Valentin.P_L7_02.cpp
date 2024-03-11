//Program de verificare daca un numar citit este patrat perfect
//Valentin Ples, grupa 2012
#include <iostream>
#include <math.h>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int validam(int);

int main()
{
    int a;
	printf("Introduceti numarul : ");
	scanf("%d", &a);
	if (validam(a) == 1)
	{
		cout<<"\nNumarul introdus este patrat perfect";
	}
	else
	{
		cout<<"\nNumarul introdus nu este patrat perfect";
	}
	return 0;
}
int validam (int x)
{
    if ((int)sqrt(x)==sqrt(x))
        return 1;
    else
        return 0;
}
