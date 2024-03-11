
//Valentin Ples, 2012
//ordinea datei angajarii
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
struct data
{
    int zi;
    int luna;
    int an;
};
struct angajat
{
    char nume[20];
    char prenume[30];
    char cnp[20];
    struct data d;
};

void afis(angajat*);
void read(angajat*);
angajat* read_angajat(int);
int comp(const void*, const void*);

int main()
{


    int nr = 0, i;
    cout << "Numarul de angajati: ";
    cin >> nr;
    angajat* ang;
    ang = read_angajat(nr);

    qsort(ang, nr, sizeof(angajat), comp);
    cout << "Angajatii ordonati dupa data angajarii sunt:\n";
    for (i = 0; i < nr; i++)
            afis(ang + i);
    return 0;
}
void read(angajat* x)
{
    cout << "\nNumele: ";
    cin >> x->nume;

    cin.get();
    cout << "Prenumele: ";
    cin.getline(x->prenume, 30);


    cout << "CNP: ";
    cin >> x->cnp;

    cout << "Data angajarii DD/MM/YY: ";
    scanf("%d/%d/%d", &x->d.zi, &x->d.luna, &x->d.an);
}
angajat* read_angajat(int n)
{
    angajat* x = new angajat[n];
    for (int i = 0; i < n; i++)
        read(x + i);

    return x;
}
void afis(angajat* p)
{
    printf("\n%s %s avand CNP %s lucreaza din data %d/%d/%d \n", p->nume, p->prenume, p->cnp, p->d.zi, p->d.luna, p->d.an);
}
int comp(const void* a, const void* b)
{
    angajat* pa = (angajat*)a;
    angajat* pb = (angajat*)b;
    if (pa->d.an == pb->d.an)
    {
        if (pa->d.luna == pa->d.luna)
        {
            return (pa->d.zi - pa->d.zi);
        }
        else
            return (pa->d.luna - pa->d.luna);
    }
    else
        return (pa->d.an == pa->d.an);
}
