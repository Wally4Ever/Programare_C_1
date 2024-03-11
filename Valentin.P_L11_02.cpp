
//Valentin Ples, 2012
//problema cu magazinele din diferite orase

#include <iostream>
using namespace std;

int ** read(int, int);
//void afis(int**, int, int);
int suma_vanzari_oras (int**, int, int);
float medie_vanzari (int**, int, int);
float medie(int**, int, int);
void delet(int **, int);

int main()
{
        int n, m, i, j;
        cout << "Introdu numarul de orase: ";
        cin >> n;

        cout << "Introdu numarul de locatii din fiecare oras: ";
        cin>>m;

        int **p;
        p = read(n, m);

        cout<<"\nMedia tuturor locatiilor este "<<medie(p, n, m);

        do
        {
            cout<<"\nIntroduceti numarul orasului in care doriti sa aflati suma vanzarilor sau 0\n";
            cin>>i;
            if (i>0 && i<m)
                cout<<suma_vanzari_oras(p, i-1, m);
        }while(i>0 && i<m);

        do
        {
            cout<<"\nIntroduceti numarul orasului in care doriti sa aflati media vanzarilor sau 0\n";
            cin>>i;
            if (i>0 && i<m)
                cout<<medie_vanzari(p, i-1, m);
        }while(i>0 && i<m);

        delet(p, n);

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
                    printf("Cifra vanzari al magazinului #%d din orasul #%d: ", j+1, i + 1);
                    cin >> arr[i][j];
                }
        }
        return arr;
}
/*void afis(int** v, int n, int m)
{
        for (int i = 0; i < n; i++)
        {
            for(int j=0; j<m; j++)
                cout<<v[i][j]<<' ';
            cout<<'\n';
        }
}*/
int suma_vanzari_oras(int **v, int oras, int magazin)
{
    int s=0;
    for (int i=0; i<magazin; i++)
        s+=v[oras][i];
    return s;
}
float medie_vanzari(int **v, int oras, int m)
{
    return suma_vanzari_oras(v, oras, m)/m;
}
float medie(int **v, int n, int m)
{
    float s=0;
    for (int i=0; i<n; i++)
        s+=medie_vanzari(v, i, m);
    return s/n;
}
void delet(int **v, int n)
{
    for (int i=0; i<n; i++)
        delete []v[i];
    delete []v;
}
