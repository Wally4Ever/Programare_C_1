//Valentin Ples, gr 2012
//aranjează crescător/descrescator
//numără câte elemente sunt pare
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <iostream>
using namespace std;

int cmp(const void*, const void*);
int pare(int[]);

int main()
{
	FILE* f;
	fopen_s(&f, "Text.txt", "r");
	if (!f)
	{
		cout << "OH NO!";
		exit(1);
	}

	int v[10], i;

	for (i = 0; i < 10; i++)
		fscanf(f, "%d", &v[i]);

	qsort(v, 10, sizeof(int), cmp);

	int nr = pare(v);

	fclose(f);

	fopen_s(&f, "Text.txt", "w");
	if (!f)
	{
		cout << "OH NO!";
		exit(1);
	}
	for (i = 0; i < 10; i++)
		fprintf(f, "%d ", v[i]);
	fprintf(f, "\nSunt %d numere pare", nr);
	fclose(f);

	return 0;
}
int cmp(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
int pare(int v[])
{
	int i, nr = 0;
	for (i = 0; i < 10; i++)
		if (v[i] % 2 == 0)
			nr++;
	return nr;

}