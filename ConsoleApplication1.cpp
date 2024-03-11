//Valentin Ples, gr 2012
//date întregi preluate dintr-un fişier text 
//al cărui nume este citit de la consolă
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() 
{
	FILE* f;
	int nr;
	cout << "Introduceti numele fisierului: ";

	char name[20];
	cin.getline(name, 20);

	errno_t err; 

	err = fopen_s(&f, name, "w");
	if (err != 0) 
	{
		puts("Eroare!");
		exit(1);
	}

	int n;
	cout << "\nIntrodu numarul de valori care vor fii introduse in fisier: ";
	cin >> n;
	cout << "\nIntrodu valorile: ";

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &nr);
		fprintf(f, "%d ", nr);
	}
	fclose(f);

	err = fopen_s(&f, name, "r");
	if (err != 0)
	{
		puts("Eroare!");
		exit(1);
	}

	while (fscanf(f, "%d", &nr)!=EOF)
	{
		printf("%d ", nr);
	}

	fclose(f);
	return 0;
}
