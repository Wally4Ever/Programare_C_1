// Valentin Ples, grupa 2012
// ordonare cu functii predefinite

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#define DIM 20
using namespace std;

void read(int*, int);
void afis(int*, int);
int desc(const void*, const void*);
int cresc(const void*, const void*);

int main()
{
    int n, x[DIM];
    int* v = x;

    cout << "Nr de elemente: ";
    cin >> n;

    if (n > DIM || n < 0)
    {
        cout << "\nDimensiune INVALIDA!";
        return 1;
    }
    read(v, n);
    afis(v, n);

    qsort(v, n, sizeof(int), cresc);

    cout << "\nOrdonat crescator ";
    afis(v, n);

    qsort(v, n, sizeof(int), desc);
    cout << "\nOrdonat descrescator ";
    afis(v, n);

    return 0;
}
void read(int* v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("v[%d]=", i + 1);
        cin >> *(v + i);
    }
}
void afis(int* v, int n)
{
    cout << "Tabloul este: " << '\n';
    for (int i = 0; i < n; i++)
        printf("v[%d]=%d; ", i + 1, *(v + i));
}
int cresc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int desc(const void* a, const void* b)
{
    if (*(int*)a < *(int*)b) return 1;
    if (*(int*)a == *(int*)b) return 0;
    if (*(int*)a > *(int*)b) return -1;
}