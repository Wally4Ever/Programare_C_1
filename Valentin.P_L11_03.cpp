
//Valentin Ples, 2012
//matricea suma a 2 matrici

#include <iostream>
using namespace std;

int ** read(int, int);
void afis(int**, int, int);
void delet(int **, int);
int **suma(int **, int **, int, int);
int main()
{
        int n, m, i, j;
        cout << "Introdu nr linii: ";
        cin >> n;

        cout << "Introdu nr coloane: ";
        cin>>m;

        int **a, **b, **sum;
        cout<<"\nPrima matrice:\n";
        a = read(n, m);

        cout<<"\A doua matrice:\n";
        b = read(n, m);

        cout<<'\n';
        afis(a, n, m);
        cout<<'\n';
        afis(b,n,m);

        sum=suma(a, b, n, m);
        cout<<"\nMatricea suma\n";
        afis(sum, n, m);

        delet(a, n);
        delet(b, n);
        delet(sum, n);
        return 0;
}
int** read(int n, int m)
{
        int **arr = new int*[n];
        for (int i = 0; i < n; i++)
        {
                arr[i]=new int[m];
                for(int j=0; j<m; j++)
                {
                    printf("x[%d][%d]=", i+1, j + 1);
                    cin >> arr[i][j];
                }
        }
        return arr;
}
void afis(int** v, int n, int m)
{
        for (int i = 0; i < n; i++)
        {
            for(int j=0; j<m; j++)
                cout<<v[i][j]<<' ';
            cout<<'\n';
        }
}
void delet(int **v, int n)
{
    for (int i=0; i<n; i++)
        delete []v[i];
    delete []v;
}
int **suma(int **x, int **y, int n, int m)
{
    int **arr=new int*[n];
    for (int i=0; i<n; i++)
    {
        arr[i]=new int[m];
        for (int j=0; j<m; j++)
            arr[i][j]=x[i][j]+y[i][j];
    }
    return arr;
}
