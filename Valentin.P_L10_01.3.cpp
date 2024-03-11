

// Valentin Ples, grupa 2012
//valoare medie in tablou

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define DIM 20
using namespace std;

void medie(int*, int, float&, float&);
void read(int*, int);
void afis(int*, int);

int main()
{
        int n, x[DIM];
        float medn, medp;
	int *v=x;
        cout<<"Nr de elemente: ";
        cin>>n;

        if (n > DIM || n < 0)
        {
            cout<<"\nDimensiune INVALIDA!";
            return 1;
        }
        read(v, n);
        afis(v, n);
        medie (v, n, medp, medn);
        printf("\nMedia numerelor negative este %.2f, iar media numerelor pozitive este %.2f", medn, medp);
        return 0;
}
void read(int* v, int n)
{
        for (int i = 0; i < n; i++)
        {
                printf("v[%d]=", i+1);
                cin >> *(v+i);
        }
}
void afis(int *v, int n)
{
        cout << "Tabloul este: " << '\n';
        for (int i = 0; i < n; i++)
                printf("v[%d]=%d; ", i+1, *(v+i));
}
void medie(int *v, int n, float &poz, float &neg)
{
        poz=0;
        neg=0;
        int nrpoz=0, nrneg=0;
        for (int i = 0; i < n; i++)
                if (v[i] < 0)
                {
                    nrneg++;
                    neg+=*(v+i);
                }
                else
                {
                    nrpoz++;
                    poz+=*(v+i);
                }
        if (nrpoz)
            poz/=nrpoz;
        if (nrneg)
            neg/=nrneg;

}


