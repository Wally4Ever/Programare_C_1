//Valentin Ples, gr 2012
//scrie acest caracter într - un fişier text pe n linii, câte n caractere pe fiecare linie,
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

	int n;
	char x;
	cout << "Introdu caracterul: ";
	cin >> x;

	cout << "\nIntrodu de cate ori si pe cate linii va fi introdus in fisier: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int i=0; i<n; i++)
			fprintf(f, "%c ", x);
		fprintf(f, "\n");
	}
	
	fclose(f);
	return 0;
}
