
//Valentin Ples, 2012
//o funcţie care 
//returnează înregistrarea student cu media cea mai mare
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

struct student
{
    char nume[20];
    char prenume[30];
    bool gen;
};


void read(student*);
student* read_stud(int);

int main()
{


    int nr = 0, i, femei = 0;
    cout << "Numarul de studenti: ";
    cin >> nr;
    student* stu;
    stu = read_stud(nr);
    for (i = 0; i < nr; i++)
        if (!stu[i].gen)
            femei++;
    printf("\nIn facultate sunt %d studente", femei);
    delete stu;
    return 0;
}
void read(student* x)
{
    cout << "\nNumele studentului: ";
    cin >> x->nume;

    cin.get();
    cout << "Prenumele studentului: ";
    cin.getline(x->prenume, 30);

    cout << "Genul (0=feminin; 1=masculin): ";
    cin >> x->gen;

}
student* read_stud(int n)
{
    student* x = new student[n];
    for (int i = 0; i < n; i++)
        read(x + i);

    return x;
}



