//Valentin Ples, 2012
//afis masini mai noi de 2010 si rosii
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 20

struct masina
{
	char producator[30];
	int an;
	int cm3;
	char culoare[30];
};

void afis(masina*);
void read(masina*);
masina* read_pr(int);

int main()
{


	int nr = 0, i;
	cout << "Numarul de masini: ";
	cin >> nr;
	masina* mas;
	mas = read_pr(nr);
	for (i = 0; i < nr; i++)
		if (mas[i].an > 2010 && (strcmp(mas[i].culoare, "rosie") == 0 || strcmp(mas[i].culoare, "rosu") == 0))
			afis(mas + i);

	delete mas;

	return 0;
}
void read(masina* x)
{
	cin.get();
	cout << "\nProducator : ";
	cin.getline(x->producator, 30);

	cout << "\nAnul fabricatiei: ";
	cin >> x->an;

	cout << "\nCapacitate cilindrica (cm3): ";
	cin >> x->cm3;

	cout << "\nCuloare: ";
	cin >> x->culoare;

}
masina* read_pr(int n)
{
	masina* x = new masina[n];
	for (int i = 0; i < n; i++)
		read(x + i);

	return x;
}
void afis(masina* p)
{
	printf("\n%s, culoare %s, fabricata in %d motor de %dcm3\n", p->producator, p->culoare, p->an, p->cm3);
}