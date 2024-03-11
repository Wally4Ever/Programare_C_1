

// Valentin Ples, grupa 2012
 //resturile împărţirii elementelor primului
// tablou la numărul elementelor pozitive din acesta

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define DIM 20
using namespace std;

void read(int[], int);
void afis(int[], int);
int pozitive(int[], int);
void constructie(int [], int [], int, int);

int main()
{
        int n, nr=0;
        int v[DIM], resturi[DIM];

        cout<<"Nr de elemente: ";
        cin>>n;

        if (n > DIM || n < 0)
        {
            cout<<"\nDimensiune INVALIDA!";
            return 1;
        }
        read(v, n);
        afis(v, n);
        nr=pozitive(v, n);
        constructie(resturi, v, n, nr);
        afis(resturi, n);
        return 0;
}
void read(int v[], int n)
{
        for (int i = 0; i < n; i++)
        {
                printf("v[%d]=", i+1);
                cin >> v[i];
        }
}

void afis(int v[], int n)
{
        cout << "\nTabloul este: " << '\n';
        for (int i = 0; i < n; i++)
                printf("v[%d]=%d; ", i+1, v[i]);
}

int pozitive(int v[], int n)
{
    int nr=0;
    for (int i=0; i<n; i++)
        if (v[i] > 0)
            nr++;
    return nr;
}
void constructie(int x[], int v[], int n, int rest)
{
    for (int i=0; i<n; i++)
        x[i]=v[i]%rest;
}


