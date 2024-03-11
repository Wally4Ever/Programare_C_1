//Valentin Ples, gr 2012
//citeşte valori reale dintr-un fişier
//scrie într-un 
//alt fişier partea întreagă a numerelor pozitive citite

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	FILE* f, *g;
	fopen_s(&f, "in.txt", "r");
	if (!f)
	{
		puts("Eroare!");
		exit(1);
	}
	fopen_s(&g, "out.txt", "w");
	if (!g)
	{
		puts("Eroare!");
		exit(1);
	}

	float nr;
	while (fscanf(f, "%f", &nr) != EOF)
		if (nr>0)
			fprintf(g, "%d ",  (int)nr);

	fclose(f);
	fclose(g);
	return 0;
}
