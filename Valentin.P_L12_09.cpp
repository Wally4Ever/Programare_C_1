//Valentin Ples, 2012
//functii cu struct 2.0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 20

struct produs
{
	char denumire[30];
	float pret;
	float kg;
};

void afis(produs*);
void read(produs*);
produs* read_pr(int);
produs* cantitate(produs*, int);

int main()
{


	int nr = 0, i;
	cout << "Numarul de produse: ";
	cin >> nr;
	produs* prod;
	prod = read_pr(nr);

	afis(cantitate(prod, nr));

	delete prod;

	return 0;
}
void read(produs* x)
{
	cin.get();
	cout << "\nDenumirea produsului : ";
	cin.getline(x->denumire, 30);

	cout << "\nPretul produsului: ";
	cin >> x->pret;

	cout << "\nCanitate: ";
	cin >> x->kg;

}
produs* read_pr(int n)
{
	produs* x = new produs[n];
	for (int i = 0; i < n; i++)
		read(x + i);

	return x;
}
void afis(produs* p)
{
	printf("\nDin produsul %s exista %.2fkg pe stoc (RON%.2f/kg)\n", p->denumire, p->kg, p->pret);
}
produs* cantitate(produs* x, int n)
{
	float c = x[0].kg;
	int poz = 0;
	for (int i = 0; i < n; i++)
		if (c < x[i].kg)
		{
			c = x[i].kg;
			poz = i;
		}
	return x + poz;
}