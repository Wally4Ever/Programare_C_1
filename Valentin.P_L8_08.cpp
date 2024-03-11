
// Valentin Ples, grupa 2012
//valoare medie si valorile
//din tablou mai mari

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define DIM 20
using namespace std;

float medie(float[], int);
void read(float[], int);
void afis(float[], int);
void mai_mic(float[], int, float);

int main()
{
        int n;
        float v[DIM];

        cout<<"Nr de elemente: ";
        cin>>n;

        if (n > DIM || n < 0)
        {
            cout<<"\nDimensiune INVALIDA!";
            return 1;
        }
        read(v, n);
        afis(v, n);
        float med= medie (v, n);
        printf("\nMedia este %.2f", med);
        mai_mic(v, n, med);
        return 0;
}
void read(float v[], int n)
{
        for (int i = 0; i < n; i++)
        {
                printf("v[%d]=", i+1);
                cin >> v[i];
        }
}
void afis(float v[], int n)
{
        cout << "Tabloul este: " << '\n';
        for (int i = 0; i < n; i++)
                printf("v[%d]=%.2f; ", i+1, v[i]);
}
float medie(float v[], int n)
{
        float sum=0;
        for (int i = 0; i < n; i++)
                sum+=v[i];
        return sum/n;
}
void mai_mic(float v[], int n, float x)
{
    printf("\nElementele mai mici decat %.2f sunt: ", x);
    for (int i=0; i<n; i++)
        if (v[i] < x)
            cout<<v[i]<<' ';
}

