//Valentin Ples, gr 2012
//Valorile citite vor fi scrise într-un fişier text cu numele citit din linia de comandă
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int count, char* arg[])
{
	FILE* f;
	char name[31];
	strcpy(name, arg[1]);

	int nr, i;
	float x;

	cout << "Introdu numarul de valori: ";
	cin >> nr;

	fopen_s(&f, name, "w");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	cout << "Introdu valorile: ";
	for (i = 0; i < nr; i++)
	{
		cin >> x;
		fprintf(f, "%f ", x);
	}
	fclose(f);

	fopen_s(&f, name, "r");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	float min;
	cout << "\nValoarea limita: ";
	cin >> min;

	while (fscanf(f, "%f", &x) != EOF)
		if (x > min)
			cout << x << ' ';

	fclose(f);
	return 0;
}
