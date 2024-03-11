//Valentin Ples, 2012
//interschimbare linii matrice
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void read(int(*)[10], int, int);
void afis(int(*)[10], int, int);
void interschimb(int(*)[10], int, int, int);

int main()
{
	int a[10][10], n, m, x, c;
	int(*pa)[10];
	pa = a;

	cout << "Introdu numarul de linii si numarul de coloane ale matricilor: ";
	cin >> n >> m;

	read(pa, n, m);
	afis(pa, n, m);

	cout << "Liniile care vor fii interschimbate: linia 1 = ";
	cin >> x;
	cout << "linia 2 = ";
	cin >> c;

	interschimb(pa, m, x-1, c-1);
	cout << "\nMatricea noua este\n";
	afis(pa, n, m);


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
void interschimb(int(*pa)[10], int m, int x, int c)
{
	int k;
	for (k = 0; k < m; k++)
		swap(*(*(pa + x) + k), *(*(pa + c) + k));

}