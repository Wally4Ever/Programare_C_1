
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
    float media;
};

void afis(student*);
void read(student*);
student* read_stud(int);
student* medie(student *, int);

int main()
{


    int nr = 0, i;
    cout << "Numarul de studenti: ";
    cin >> nr;
    student* stu;
    stu = read_stud(nr);

    afis(medie(stu, nr));
    return 0;
}
void read(student* x)
{
    cout << "\nNumele studentului: ";
    cin >> x->nume;

    cin.get();
    cout << "Prenumele studentului: ";
    cin.getline(x->prenume, 30);

    cout << "Media: ";
    cin >> x->media;

}
student* read_stud(int n)
{
    student* x = new student[n];
    for (int i = 0; i < n; i++)
        read(x + i);

    return x;
}
void afis(student* p)
{
    printf("\n%s %s a avut media %.2f\n", p->nume, p->prenume, p->media);
}
student* medie(student* x, int n)
{
    float med = x[0].media;
    int poz = 0;
    for (int i=0; i<n; i++)
        if (med < x[i].media)
        {
            med = x[i].media;
            poz = i;
        }
    return x+poz;
}


