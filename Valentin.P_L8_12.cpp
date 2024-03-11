

// Valentin Ples, grupa 2012
/*pătratică să se afişeze elementele diagonalei secundare,
altfel să se afişeze suma elementelor de
pe o coloană dată, c*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define DIM 20
using namespace std;

void read(int[][DIM], int, int);
void afis(int[][DIM], int, int);
int sum_coloane(int[][DIM], int, int);

int main()
{
    int n, m, a[DIM][DIM], c, sum=0;


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

    if (m==n)
    {
        for (int i=0; i<n; i++)
            sum+=a[i][n-i-1];
        cout<<"Suma elementelor pe diagonala secundara este "<<sum;
    }
    else
    {
        cout<<"Introdu o coloana: ";
        cin>>c;
        cout<<"Suma elementelor de pe coloana "<<c<<" este: "<<sum_coloane(a, n, c-1);
    }

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
int sum_coloane(int v[][DIM], int n, int col)
{
    float s=0;
	for (int i = 0; i < n; i++)
            s += v[i][col];
    return s;
}
