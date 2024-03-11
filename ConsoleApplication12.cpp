//Valentin Ples, gr 2012
/*preia din linia de comanda doua nume de fisier.
- citeşte prin program 8 numere intregi, pe care le scrie in primul fisier, in mod binar.
- citeşte înapoi valorile din acest fisier si calculează media aritmetica a numerelor mai
mari decat 4
- scrie rezultatul in al doilea fisier, sub forma : Media aritmetica a numerelor…, este…
unde in locul punctelor de suspensie va scrie valorile a caror medie a fost calculată,
respectiv valoarea mediei, cu o precizie de 2 zecimale*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int count, char* arg[])
{
	FILE* f, *g;

	int i, x[8];

	fopen_s(&f, arg[1], "wb");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	cout << "Introdu valorile intregi: ";
	for (i = 0; i < 8; i++)
		cin >> x[i];
	fwrite(&x, sizeof(int), 8, f);
	fclose(f);

	fopen_s(&f, arg[1], "rb");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	fopen_s(&g, arg[2], "w");
	if (!g)
	{
		puts("Eroare!");
		exit(1);
	}

	fprintf(g, "Media aritmetica a numerelor ");
	int sum = 0;
	float nr = 0;
	while (fread(&i, sizeof(int), 1, f) == 1)
		if (i > 4)
		{
			fprintf(g, "%d ", i);
			sum += i; nr++;
		}
	fprintf(g, "este %.2f", sum / nr);
	fclose(g);
	fclose(f);
	return 0;
}
