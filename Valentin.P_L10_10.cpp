// Valentin Ples, grupa 2012
//completeaza tablou b, fiecare element al acestuia fiind obţinut prin scăderea
//mediei aritmetice a elementelor din a 

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define DIM 20
using namespace std;

void medie(int*, int, float&);
void read(int*, int);
void afis(int*, int);
void afisf(float*, int);
void arr(int*, float*, int, float);
int main()
{
    int n, a[DIM];
    float b[DIM], med;

    cout << "Nr de elemente: ";
    cin >> n;

    if (n > DIM || n < 0)
    {
        cout << "\nDimensiune INVALIDA!";
        return 1;
    }

    read(a, n);
    afis(a, n);
    medie(a, n, med);
    arr(a, b, n, med);
    afisf(b, n);

    return 0;
}
void read(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("v[%d]=", i + 1);
        cin >> *(v+i);
    }
}
void afis(int *v, int n)
{
    cout << "\nTabloul este: " << '\n';
    for (int i = 0; i < n; i++)
        printf("v[%d]=%d; ", i + 1, *(v+i));
}
void afisf(float* v, int n)
{
    cout << "\nTabloul este: " << '\n';
    for (int i = 0; i < n; i++)
        printf("v[%d]=%.2f; ", i + 1, *(v + i));
}
void medie(int *v, int n, float& poz)
{
    poz = 0;
    for (int i = 0; i < n; i++)
        poz += *(v+i);
    poz /= n;
}
void arr(int* a, float* b, int n, float med)
{
    for (int i = 0; i < n; i++)
        *(b + i) = (float)*(a + i) - med;
}