//Valentin Ples, 2012
//metoda lui sarrus

#include <iostream>
using namespace std;

int ** read(int, int);
void afis(int**, int, int);
void delet(int **, int);
int sarrus(int **, int);

int main()
{
        int n, m, i, j;
        cout << "Introdu numarul de linii ";
        cin >> n;

        cout << "Introdu numarul de coloane: ";
        cin>>m;
        if (!(m==3 && m==n))
        {
            cout<<"Determinantul nu poate fii obtinut prin metoda lui Sarrus!";
            return 1;
        }
        int **p;
        p = read(n, m);
        afis(p, n, m);
        cout<<"Determinantul este egal cu "<<sarrus(p, n);
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
int sarrus(int **matrix, int n)
{
    int i, j;
    int diagonal1 = 1,diagonal2 = 1,diagonal3 = 1;
    int diagonal4 = 1,diagonal5 = 1,diagonal6 = 1;
    for(i = 1;i<=n;i++){
        for(j=1;j<=n;j++){
            //1stst diagonal
            if(i == j)
            {
                diagonal1*=matrix[i-1][j-1];
            }
            //2nd diagonal
            if( ((i*j == 2 || i*j ==6)  && i>j) || (i*j == 3 && i<j) ){
                diagonal2*=matrix[i-1][j-1];
            }
            //3rd diagonal
            if(((i*j == 2 || i*j ==6)  && i<j) || (i*j == 3 && i>j)){
                diagonal3*=matrix[i-1][j-1];
            }
        }
    }
    int sum1 = diagonal1 + diagonal2 + diagonal3;
    for(i = 1;i<=n;i++){
        for(j=1;j<=n;j++){
            //1stst diagonal
            if(i*j == 3 || i*j == 4)
            {
                diagonal4*=matrix[i-1][j-1];
            }
            //2nd diagonal
            if(i*j == 1 || i*j == 6){
                diagonal5*=matrix[i-1][j-1];
            }
            //3rd diagonal
            if(i*j == 2 || i*j == 9){
                diagonal6*=matrix[i-1][j-1];
            }
        }
    }
    int sum2 = diagonal4 + diagonal5 + diagonal6;
    return sum1-sum2;
}
