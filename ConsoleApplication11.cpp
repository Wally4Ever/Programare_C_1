//Valentin Ples, gr 2012
/*citeşte de la consolă un numar întreg n
- citeşte de la consolă, cu o funcţie, n numere întregi, memorându-le într-un tablou 
unidimensional, alocat dinamic
- scrie valorile din acest tablou într-un fişier binar, al cărui nume este citit de la consolă;
- citeşte conţinutul fişierului şi afişează conţinutul si offsetul poziţilor pe care s-au găsit 
numere pare.
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

	int* p;
	int n, i;
	cout << "\nIntrodu numarul de elemente: ";
	cin >> n;
	p = read(n);

	fwrite(p, sizeof(float), n, f);

	fclose(f);

	fopen_s(&f, name, "rb");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	while (fread(&i, sizeof(int), 1, f) == 1)
		if (i % 2 == 0)
			printf("Numarul par %d are offset-ul %d\n", i, ftell(f));
		else
			cout << i << '\n';

	fclose(f);
	delete p;
	return 0;
}
int* read(int n)
{
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		printf("tablou el #%d: ", i + 1);
		cin >> arr[i];
	}
	return arr;
}