//Valentin Ples, 2012
//ghicire numar generat 
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h> 
#include <time.h>   
using namespace std;
int main()
{
	srand(time(NULL));
	int r = rand() % 100 + 1;
	int n;
	const char* p[] = { "valoare prea mica ",  "valoare prea mare ", "valoare corecta " };
	do
	{
		cin >> n;
		if (n > r)
			cout << p[1];
		else if (n < r)
			cout << p[0];
		else
			cout << p[2];
	} while (n != r);
}