

// Valentin Ples, grupa 2012
/*a) afişează poziţiile elementelor pare din fiecare matrice;
b) afişează suma elementelor impare din ambele matrice;
c) afişează suma matricelor;*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define DIM 20
using namespace std;


void read(int[][DIM], int, int);
void afis(int[][DIM], int, int);
void poz(int [][DIM], int, int);
int sum(int [][DIM], int, int);
int impar(int [][DIM], int, int);


int main()
{
        int n, m, a[DIM][DIM], b[DIM][DIM], x, y;


        cout<<"Nr de elemente pe linie: ";
        cin>>n;
        cout<<"Nr de elemente pe coloana: ";
        cin>>m;

        if ((n > DIM || n < 0)&&(m>DIM || m<0))
        {
            cout<<"\nDimensiune INVALIDA!";
            return 1;
        }

        read(a, n, m);
        afis(a, n, m);

        cout<<"Nr de elemente pe linie: ";
        cin>>x;
        cout<<"Nr de elemente pe coloana: ";
        cin>>y;
        if ((x > DIM || x < 0)&&(y>DIM || y<0))
        {
            cout<<"\nDimensiune INVALIDA!";
            return 1;
        }
        read(b, x, y);
        afis(b, x, y);

        poz(a, n, m);
        poz(b, n, m);

        printf("\nSuma el impare in prima matrice este %d, in a 2-a este %d", impar(a, n, m), impar(b, x, y));
        printf("\nSuma totala a matricelor este %d", sum(a, n, m)+sum(b, x, y));

        return 0;
}
void read(int v[][DIM], int n, int m)
{
        for (int i = 0; i < n; i++)
            for (int j=0; j<m; j++)
            {
                printf("a[%d][%d]=", i+1, j+1);
                cin >> v[i][j];
            }
}
void afis(int v[][DIM], int n, int m)
{
        cout << "Matricea este: " << '\n';
        for (int i = 0; i < n; i++)
        {
            for (int j=0; j<m; j++)
                cout<<v[i][j]<<' ';
            cout<<'\n';
        }

}
void poz(int v[][DIM], int n, int m)
{
    cout<<"Pozitiile elementelor pare sunt:";
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            if (v[i][j]%2==0)
                printf(" (%d, %d) ", i+1, j+1);
}
int impar(int v[][DIM], int n, int m)
{
    int s=0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
            if (v[i][j] % 2 != 0)
                s += v[i][j];
    return s;

}
int sum(int v[][DIM], int n, int m)
{
    int s=0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
            s += v[i][j];
    return s;
}
