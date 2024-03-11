
// Valentin Ples, grupa 2012
// ordonat crescator
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


void read(int[], int);
void afis(int[], int);
void ordo(int[], int);

int main()
{
        int v[10];
        const int n=10;

        cout<<"Introdu 10 elemente: ";


        read(v, n);
        afis(v, n);

        cout<<"\nOrdonat crescator:\n";
        ordo(v, n);
        afis(v, n);

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
void ordo(int v[],int n)
{
	int i, j, aux;
	for (i = 0; i < n; i++)
		for (j = i+1; j < n; j++)
			if (v[i] > v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}

