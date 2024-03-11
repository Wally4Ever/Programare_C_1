//Valentin Ples, gr 2012
//citeşte caracter cu caracter un fişier text şi converteşte 
//primul caracter al fiecărui cuvânt în majusculă.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	FILE* f;
	fopen_s(&f, "fis.txt", "r");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}

	char c;
	int ok = 0;
	while (!feof(f))
	{
		c = fgetc(f);
		if (ok == 0)
		{
			cout<<char(c - 32);
			ok = 1;
		}
		else
		{
			printf("%c", c);
		}
		if (c == ' ')
		{
			ok = 0;
		}
	}
	fclose(f);
	return 0;
}
