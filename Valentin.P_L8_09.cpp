

// Valentin Ples, grupa 2012
//afis elemente impare negative

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define DIM 20
using namespace std;

void read(int[], int);
void afis(int[], int);
void negativ_impar(int[], int, int&);

int main()
{
        int n, nr=0;
        int v[DIM];

        cout<<"Nr de elemente: ";
        cin>>n;

        if (n > DIM || n < 0)
        {
            cout<<"\nDimensiune INVALIDA!";
            return 1;
        }
        read(v, n);
        afis(v, n);
        negativ_impar(v, n, nr);
        printf("\nAcest tip de valori apar in tablu de %d ori", nr);

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
        cout << "Tabloul este: " << '\n';
        for (int i = 0; i < n; i++)
                printf("v[%d]=%d; ", i+1, v[i]);
}

void negativ_impar(int v[], int n, int &nr)
{
    nr=0;
    printf("\nElementele negative si impare sunt: ");
    for (int i=0; i<n; i++)
        if (v[i] < 0 && v[i]%2!=0)
        {
            nr++;
            cout<<v[i]<<' ';
        }
}

