
//Valentin Ples, 2012
//cele mai frecvente 10 numere cu numarul lor de aparitii

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int* gen(int);
void afis(int*, int);

int main()
{
        int n,k,i;
        int *p;
        cout << "Introdu nr. de elemente: ";
        cin >> n;

        cout << "Elementele tabloului sunt generate aleatoriu\n";
        p=gen(n);

        afis(p, n);

        int *frecv;
        frecv=(int*)calloc(101, sizeof(int));//vector de frecventa
        for ( i=0; i<n; i++)
            frecv[p[i]]++;
        int val[10]={0}, apar[10]={0};

        int ok=1;
        k=0;
        for (i=1; i<101; i++)
            if (apar[k]<frecv[i])
            {
                apar[k]=frecv[i];
                val[k]=i;
            }

        for (k=1; k<10; k++)
        {
            ok=1;
            for (i=1; i<101 && ok==1; i++)
            {
                if (apar[k]<frecv[i] && frecv[i]<apar[k-1])
                {
                    apar[k]=frecv[i];
                    val[k]=i;
                }

            }
        }
        cout<<"\nValorile care apar cel mai des in sir urmate de numarul de aparitii:\n";
        for (i=0; i<10; i++)
            printf("Valoarea %d apare de %d ori in sir\n", val[i], apar[i]);

        //nu stiu cum sa afisez valorile diferite care apar de acelasi numar
        //maxim de ori in sir, am incercat multe variante...
        free(p);
        free(frecv);
        return 0;
}
int *gen(int n)
{
        srand(time(NULL));
        int *p = (int*)malloc(n*sizeof(int));
        for (int i = 0; i < n; i++)
            p[i]=rand()%100+1;
        return p;
}
void afis(int *p, int n)
{
        for (int i = 0; i < n; i++)
                cout<<p[i]<<' ';
}

