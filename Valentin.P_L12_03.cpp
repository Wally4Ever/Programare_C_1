//Valentin Ples, 2012
//functii cu struct 2.0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 20

struct produs
{
	int cod;
	float pret;
	int gram;
	float pret_gram;
	float achit=0;
	int nrachit=0;
};

void afis(produs*);
void read(produs*);
produs* read_pr(int);
float medie_vanzare(produs*, int);

int main()
{


	int nr = 0, i;
	cout << "Numarul de produse: ";
	cin >> nr;
	produs* prod;
	prod = read_pr(nr);


	for (i = 0; i < nr; i++)
		afis(prod + i);

	bool ok = 0;
	do
	{
		int cod, cant;
		printf("\nIntrodu pozitia produsului pe raft (1-%d): ", nr);
		cin >> cod;
		cout << "Introdu cantitatea(grame): ";
		cin >> cant;
		printf("Pretul este %.2f", prod[cod - 1].pret_gram / 100 * cant);

		prod[cod-1].achit+=prod[cod - 1].pret_gram / 100 * cant;
		prod[cod-1].nrachit++;
		cout << "\nDoriti calcularea unui alt produs (1) sau nu (0)?";
		cin >> ok;
	} while (ok);

	cout << "\n\nMedia vanzarilor este: " << medie_vanzare(prod, nr);
	return 0;
}
void read(produs* x)
{
	cout << "\nCodul produsului : ";
	cin >> x->cod;

	cout << "\nPretul produsului: ";
	cin >> x->pret;

	cout << "\nGramaj: ";
	cin >> x->gram;

	x->pret_gram = x->pret * 100 / x->gram;

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
	printf("\nProdusul %d costa %.2f/100gr\n", p->cod, p->pret_gram);
}
float medie_vanzare(produs* x, int n)
{
	float s = 0;
	int nr = 0;
	for (int j = 0; j < n; j++)
	{
		s += x->achit;
		nr += x->nrachit;
	}
	return s / nr;
}

