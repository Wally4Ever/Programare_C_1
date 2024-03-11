#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 20

struct student
{
	char nume[20];
	char prenume[30];
	char tara[20];
	int grupa;
	int an;
};

void afis(student);

int main()
{
	
	student stu[MAX];
	int nr = 0, i;
	do
	{
		cout << "Numele studentului (AAA cand doriti finalizarea citirii)\n";
		cin >> stu[nr].nume;
		if (strcmp(stu[nr].nume, "AAA") == 0)
			break;
		cin.get();
		cout << "Prenumele studentului: ";
		cin.getline(stu[nr].prenume, 30);

		cout << "Tara de originie: ";
		cin.getline(stu[nr].tara, 20);

		cout << "Grupa: ";
		cin >> stu[nr].grupa;

		cout << "Anul nasterii: ";
		cin >> stu[nr].an;
		nr++;
	} while (nr < MAX);

	cout << "Studentii straini\n";
	for (i = 0; i < nr; i++)
		if (strcmp(stu[i].tara, "Romania")!=0)
			afis(stu[i]);

}
void afis(student p)
{
	cout << "Datele studentului sunt: ";
	printf("\n%s %s nascut in tara %s, in anul %d, face parte din grupa %d", p.nume, p.prenume, p.tara, p.an, p.grupa);
}