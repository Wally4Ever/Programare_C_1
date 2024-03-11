//Valentin Ples, gr 2012
//citeşte de la consolă n numere întregi pe care le scrie într-un fişier 
//text cu numele citit de la tastatură
//determinaţi media lor 
//aritmetică, pe care o adăugaţi la sfârşitul fişierului 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	FILE* f;
	cout << "Introduceti numele fisierului: ";
	char name[20];
	cin.getline(name, 20);

	fopen_s(&f, name, "w");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	int n, x;
	cout << "\nIntrodu numarul de valori care vor fii introduse in fisier: ";
	cin >> n;
	cout << "\nIntrodu valorile: ";
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		fprintf(f, "%d ", x);
	}
	fclose(f);

	fopen_s(&f, name, "r");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	int sum = 0;
	float nr = 0;
	while (fscanf(f, "%d", &x) != EOF)
	{
		nr++;
		sum += x;
	}
	fclose(f);
	fopen_s(&f, name, "a");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}
	fprintf(f, "Media aritmetica este %.2f", sum / nr);
	fclose(f);
	return 0;
}
