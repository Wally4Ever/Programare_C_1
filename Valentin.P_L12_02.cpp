//Valentin Ples, 2012
//functii cu struct
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 20

struct student
{
	char nume[20];
	char prenume[30];
	int grupa;
};

void afis( student*);
void read( student*);
student* read_stud(int);

int main()
{

	
	int nr = 0, i;
	cout << "Numarul de studenti: ";
	cin >> nr;
	student *stu;
	stu = read_stud(nr);

	
	for (i = 0; i < nr; i++)
		afis(stu + i);
	return 0;
}
void read( student* x)
{
	cout << "\nNumele studentului: ";
	cin >> x->nume;

	cin.get();
	cout << "Prenumele studentului: ";
	cin.getline(x->prenume, 30);

	cout << "Grupa: ";
	cin >> x->grupa;
	
}
student* read_stud(int n)
{
	student* x = new student[n];
	for (int i = 0; i < n; i++)
		read(x+i);

	return x;
}
void afis( student* p)
{
	printf("\n%s %s face parte din grupa %d\n", p->nume, p->prenume, p->grupa);
}


