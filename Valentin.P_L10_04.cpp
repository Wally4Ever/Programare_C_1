//Valentin Ples, 2012
//insumarea a 2 matrici
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void read(int(*)[10], int, int);
void afis(int(*)[10], int, int);

int main()
{
	int a[10][10], b[10][10], c[10][10] = { 0 }, n, m;
	int(*pa)[10], (*pb)[10], (*pc)[10];
	pa = a;
	pb = b;
	pc = c;

	cout << "Introdu numarul de linii si numarul de coloane ale matricilor: ";
	cin >> n >> m;

	cout << "Prima matrice: ";
	read(pa, n, m);
	afis(pa, n, m);
	cout << "A doua matrice: ";

	read(pb, n, m);
	afis(pb, n, m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			*(*(pc + i) + j) = *(*(pa + i) + j) + *(*(pb + i) + j);
	cout << "Cele doua matrici insumate:\n";
	afis(pc, n, m);
	return 0;

}
void read(int(*pa)[10], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			printf("a[%d][%d]=", i + 1, j + 1);
			cin >> *(*(pa + i) + j);
		}
}
void afis(int(*pa)[10], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << *(*(pa + i) + j) << ' ';
		cout << '\n';
	}
}

