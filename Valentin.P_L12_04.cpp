
//Valentin Ples, 2012
//afis angajatii ingineri
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
    char func[30];
    char sectie[30];
    struct data d;
};

void afis(angajat*);
void read(angajat*);
angajat* read_angajat(int);

int main()
{


    int nr = 0, i;
    cout << "Numarul de angajati: ";
    cin >> nr;
    angajat* ang;
    ang = read_angajat(nr);

    cout << "Angajatii cu ocupatia de ingineri sunt:\n";
    for (i = 0; i < nr; i++)
        if (strcmp(ang[i].func, "inginer")==0)
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

    cout << "Sectie: ";
    cin >> x->sectie;

    cout << "Functie: ";
    cin >> x->func;

    cout << "Data nasterii DD/MM/YY: ";
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
    printf("\n%s %s nascut in data de %d/%d/%d lucreaza in sectia %s avand ocupatia de %s\n", p->nume, p->prenume, p->d.zi, p->d.luna, p->d.an, p->sectie, p->func);
}


