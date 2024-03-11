//Valentin Ples, gr 2012
/* Scrieti intr-un fisier binar câteva numere intregi, citite de la tastatura. Citiţi apoi numerele
de pe poziţii impare si afişati pentru fiecare, dacă este valoare pară sau impară.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int* read(int);

int main()
{
	FILE* f;

	char name[20];
	cout << "Introdu numele fisierului: ";
	cin.getline(name, 20);

	fopen_s(&f, name, "wb");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	int x, n, i;
	cout << "\nIntrodu numarul de elemente: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		fwrite(&x, sizeof(int), 1, f);
	}
	fclose(f);

	fopen_s(&f, name, "rb");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	while (fread(&i, sizeof(int), 1, f) == 1)
	{
		if (i % 2 == 0)
			printf("Pe pozitia %d numarul este par (%d)\n", ftell(f) / sizeof(int), i);
		else
			printf("Pe pozitia %d numarul este impar (%d)\n", ftell(f) / sizeof(int), i);
		fseek(f, sizeof(int), SEEK_CUR);
	}

	fclose(f);

	return 0;
}