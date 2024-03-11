//Valentin Ples, gr 2012
//citeşte un fişier text linie cu linie şi îl afişează pe ecran
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	FILE* f;
	char s[81];
	fopen_s(&f, "text.txt", "r");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}
	while (fgets(s, 80, f) != NULL)
		printf("%s ; ", s);
	fclose(f);
	return 0;
}
