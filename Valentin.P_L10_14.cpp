//Valentin Ples, 2012
//preia numerele de la tastatură direct ordonate crescător
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


void read_cresc(int*, int);
void afis(int*, int);
void interclasare(int*, int*, int*, int, int, int&);
int main()
{
    int nr, n, m, x[20], y[20], z[41];
    int* v = x, * w = y, * c = z;

    cout << "Introdu nr de elemente pentru primul tablou: ";
    cin >> n;
    cout << "Introdu elementele in ordine CRESCATOARE\n";
    read_cresc(v, n);

    cout << "Introdu nr de elemente pentru al doilea tablou: ";
    cin >> m;
    cout << "Introdu elementele in ordine CRESCATOARE\n";
    read_cresc(w, m);

    interclasare(v, w, c, n, m, nr);
    cout << "Interclasarea celor doua tablouri:\n";
    afis(c, nr);

    return 0;
}
void read_cresc(int* v, int n)
{
    float x;
    printf("v[%d]=", 1);
    cin >> x;
    *v = x;
    for (int i = 1; i < n; i++)
        do
        {
            printf("v[%d]=", i + 1);
            cin >> x;
            *(v + i) = x;
            if (*(v + i) < *(v + i - 1))
                cout << "\nVALOARE PREA MICA\n";

        } while (*(v + i) < *(v + i - 1));
}
void afis(int* v, int n)
{
    cout << "Tabloul este: " << '\n';
    for (int i = 0; i < n; i++)
        printf("v[%d]=%d; ", i + 1, *(v + i));
}
void interclasare(int* a, int* b, int* c, int an, int bn, int& cn)
{
    cn = 0;
    int j = 0, i = 0;
    while (i < an && j < bn)
        if (a[i] < b[j])
            c[cn++] = a[i++];
        else
            c[cn++] = b[j++];

    while (i < an)
        c[cn++] = a[i++];

    while (j < bn)
        c[cn++] = b[j++];
}