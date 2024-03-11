//Valentin Ples, 2012
//numarul de el. negative de deasupra diag secundare
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void read(int(*)[10], int, int);
void afis(int(*)[10], int, int);
int negative(int(*)[10], int, int);

int main()
{
	int a[10][10], n, m;
	int(*pa)[10];
	pa = a;

	cout << "Introdu numarul de linii si numarul de coloane ale matricilor: ";
	cin >> n >> m;

	read(pa, n, m);
	afis(pa, n, m);

	cout << "\nElementele negative de sub diagonala secundara: "<< negative(pa, n, m);

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
int negative(int(*pa)[10], int n, int m)
{
	int nr = 0, i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (*(*(pa + i) + j) < 0 && j+i>=n)
				nr++;
	return nr;
}
