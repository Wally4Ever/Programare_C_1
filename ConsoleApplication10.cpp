//Valentin Ples, gr 2012
/*defineşte o structură numită Student, cu câmpurile numele, prenumele, grupa, media;
L13 – fisiere text, fisiere binare 20
- citeşte de la consolă un număr întreg n (numărul studentilor)
- pentru fiecare înregistrare de tip Student, citeşte cu o funcţie datele aferente şi le scrie 
într-un fişier, cu numele preluat de la consolă;
- citeşte conţinutul fişierului şi afişează studenţii ce au media mai mare decât o valoare 
citită de la consolă.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

struct student
{
	char nume[20];
	char prenume[30];
	int grupa;
	float media;
};

char name[20];

FILE* generator();

int main()
{
	FILE* f;
	f = generator();
	student x;

	fclose(f);

	fopen_s(&f, name, "rb");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	float med;
	cout << "Media limita: ";
	cin >> med;
	while (fread(&x, sizeof(student), 1, f)) 
	{
		if (x.media > med)
			printf("\n %s %s din grupa %d\n", x.nume, x.prenume, x.grupa);

	}

	return 0;
}

FILE* generator()
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
	int n, i;
	cout << "\nIntrodu numarul de studenti: ";
	cin >> n;

	student x[10];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNumele studentului: ";
		cin >> x[i].nume;

		cin.get();
		cout << "Prenumele studentului: ";
		cin.getline(x[i].prenume, 30);

		cout << "Grupa: ";
		cin >> x[i].grupa;

		cout << "Media: ";
		cin >> x[i].media;
	}
	for (i = 0; i < n; i++)
		fwrite(&x[i], sizeof(student), 1, pf);

	return pf;
}