// Valentin Ples, grupa 2012
//suma elementelor de pe o anumită coloană sa fie mai mica decat suma
//elementelor de pe coloana următoare
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define DIM 3
using namespace std;

void read(float[][DIM], int);
void afis(float[][DIM], int);
float sum_coloane(float [][DIM], int, int);
void ordo(float[][DIM], int);
int main()
{
        const int n=3;
        float a[DIM][DIM];

        cout<<"Introdu 9 elemente:\n";
        read(a, n);
        afis(a, n);
        int col=0;
        ordo(a, n);
        afis(a, n);
        cout<<"Suma coloanelor este:\n"<<sum_coloane(a, n, col);
        cout<<'\n'<<sum_coloane(a, n, col+1);
        cout<<'\n'<<sum_coloane(a, n, col+2);
}
void read(float v[][DIM], int n)
{
        for (int i = 0; i < n; i++)
            for (int j=0; j<n; j++)
            {
                printf("a[%d][%d]=", i+1, j+1);
                cin >> v[i][j];
            }
}
void afis(float v[][DIM], int n)
{
        cout << "Matricea este: " << '\n';
        for (int i = 0; i < n; i++)
        {
            for (int j=0; j<n; j++)
                cout<<v[i][j]<<' ';
            cout<<'\n';
        }

}
float sum_coloane(float v[][DIM], int n, int col)
{
    float s=0;
	for (int i = 0; i < n; i++)
            s += v[i][col];
    return s;
}
void ordo(float v[][DIM],int n)
{
	int i, j;
	float aux;
	for(int x=0; x<n; x++)
        for (i = 0; i < n; i++)
            for (j = i+1; j < n; j++)
                if (v[x][i] > v[x][j])
                {
                    aux = v[x][i];
                    v[x][i] = v[x][j];
                    v[x][j] = aux;
                }
}
