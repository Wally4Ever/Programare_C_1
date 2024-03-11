//Valentin Ples, 2012
//suma numerelor pozitive pare de sub diagonala principală

#include <iostream>
using namespace std;

int ** read(int, int);
void afis(int**, int, int);
void delet(int **, int);
int sum_dub(int **, int, int);

int main()
{
        int n, m, i, j;
        cout << "Introdu numarul de linii ";
        cin >> n;

        int **p;
        p = read(n, n);
        afis(p, n, n);
        int s=sum_dub(p, n, n);
        printf("Suma elementelor in cauza este %d", s);
        delet(p, n);
}
void delet(int **v, int n)
{
    for (int i=0; i<n; i++)
        delete []v[i];
    delete []v;
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
int sum_dub(int **v, int n, int m)
{
    int s=0;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            if (i>=j && v[i][j]%2==0)
                s+=v[i][j];
    return s;

}

