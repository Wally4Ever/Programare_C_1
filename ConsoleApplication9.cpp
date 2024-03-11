//Valentin Ples, gr 2012
/*citeşte de la consolă un numar întreg n;
- citeşte de la consolă, cu o funcţie, “n” numere reale, într-un tablou unidimensional, 
alocat dinamic în memorie;
- scrie aceste valori din tablou într-un fişier binar, al cărui nume este citit tot de la 
consolă;
- citeşte apoi conţinutul fişierului şi afişează numerele din 3 în 3 poziţii,*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

float* read(int);

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

	float* p;
	float x;
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
	
	while(fread(&x, sizeof(float), 1, f)==1)
	{
		cout << x<<' ';
		fseek(f, 3*sizeof(float), SEEK_CUR);
	}
	fclose(f);
	delete p;
	return 0;
}
float* read(int n)
{
	float *arr = new float[n];
	for (int i=0; i<n; i++)
	{
		printf("tablou el #%d: ", i + 1);
		cin >> arr[i];
	}
	return arr;
}