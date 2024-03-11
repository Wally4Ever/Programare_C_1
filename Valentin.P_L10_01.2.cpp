

// Valentin Ples, grupa 2012
// cel mai mic el. pozitiv

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define DIM 20
using namespace std;

int pozitie(int*, int);
void read(int*, int);
void afis(int*, int);

int main()
{
        int n, x[DIM];
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
        int poz=pozitie(v, n);
        printf ("\nCel mai mic numar pozitiv din sir se afla pe pozitia %d si are valoarea %d", poz+1, v[poz]);
        return 0;
}
void read(int *v, int n)
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
int pozitie(int *v, int n)
{
    int mini=*v, poz=0;
    for (int i=1; i<n; i++)
        if (*(v+i)<mini && *(v+i)>0)
        {
            mini=*(v+i);
            poz=i;
        }
    return poz;
}



