//Valentin Ples, gr 2012
/*Prajitura, cu campurile nume, nr_bucati, pret.
- cititi de la tastatura datele pentru un numar n de prajituri si salvati aceste date intr-un 
fisier binar.
- cititi apoi inregistrările din fişier şi afişati toate informaţiile despre prăjitura cea mai 
ieftină*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct prajitura
{
	char nume[20];
	int nr_bucati;
	float pret;
};

char name[20];

FILE* generator(int&);
int comp(const void*, const void*);

int main()
{
	FILE* f;
	int n;
	f = generator(n);
	prajitura x;

	fclose(f);

	fopen_s(&f, name, "rb");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	fread(&x, sizeof(prajitura), 1, f);
	float minim = x.pret;
	int offset = ftell(f);

	while (fread(&x, sizeof(prajitura), 1, f) == 1)
		if (x.pret < minim)
		{
			minim = x.pret;
			offset = ftell(f);
		}

	rewind(f);
	fseek(f, offset-sizeof(prajitura), SEEK_SET);
	fread(&x, sizeof(prajitura), 1, f);

	printf("\nCea mai ieftina prajitura este %s (%.2fRON/BUC). Stocul valoreaza %.2fRON", x.nume, x.pret, x.nr_bucati * x.pret);
	
	fclose(f);

	return 0;
}

FILE* generator(int &n)
{
	FILE* pf;

	cout << "Introdu numele fisierului: ";
	cin.getline(name, 20);

	fopen_s(&pf, name, "wb");
	if (!pf)
	{
		puts("Eroare!");
		exit(1);
	}
	int i;
	cout << "\nIntrodu numarul de prajituri: ";
	cin >> n;

	prajitura x[10];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNumele prajiturii: ";
		cin >> x[i].nume;


		cout << "Bucati in inventar: ";
		cin >> x[i].nr_bucati;

		cout << "Pretul pe bucata: ";
		cin >> x[i].pret;
	}

	for (i = 0; i < n; i++)
		fwrite(&x[i], sizeof(prajitura), 1, pf);

	return pf;
}
