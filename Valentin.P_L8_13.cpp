// Valentin Ples, grupa 2012
/*matrice 3D afisare perspective*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define DIM 20
using namespace std;
void afis (int[][DIM][DIM], int, int, int);
void read(int[][DIM][DIM], int, int, int);
int main()
{
    int x, y, z, i, j, k, a[DIM][DIM][DIM];
     cout<<"Nr de elemente pe linie: ";
    cin>>x;
    cout<<"Nr de elemente pe coloana: ";
    cin>>y;
    cout<<"Nr de elemente pe adancime: ";
    cin>>z;
    if ((x > DIM || x < 0)&&(y>DIM || y<0)&& (z > DIM || z < 0))
    {
        cout<<"\nDimensiune INVALIDA!";
        return 1;
    }
    read(a, x, y, z);
    cout<<"\nPerspectiva xOy:\n";
    afis(a, x, y, z);
    cout<<"\nPerspectiva xOz:\n";
    afis(a, x, z, y);
    cout<<"\nPerspectiva yOz:\n";
    afis(a, y, z, x);

}
void read(int v[][DIM][DIM], int x, int y, int z)
{
    for (int i=0; i<x; i++)
        for (int j=0; j<y; j++)
            for (int k=0; k<z; k++)
            {
                printf("v[%d][%d][%d]=", i+1, j+1, k+1);
                cin>>v[i][j][k];
            }

}
void afis(int v[][DIM][DIM], int x, int y, int z)
{
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++)
        {
            for (int k=0; k<z; k++)
                cout<<v[i][j][k]<<' ';
            cout<<'\n';
        }
        cout<<'\n';
    }
}
