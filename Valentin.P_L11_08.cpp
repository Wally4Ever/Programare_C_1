
//Valentin Ples, 2012
//tablou nou cu valoarea radicalului

#include <iostream>
#include <math.h>
using namespace std;

int* read(int);
void afisf(float*, int);
void afis(int*, int);
float* calcul(int*, int);

int main()
{
        int n, i;
        cout << "Introdu nr. de elemente: ";
        cin >> n;
        int* p;
        cout << "Introdu elementele tabloului: ";
        p = read(n);
        afis(p, n);

        float *rad;
        rad=calcul(p, n);
        afisf(rad,n);

        delete p;
        delete rad;
        return 0;
}
int* read(int n)
{
        int* arr = new int[n];
        for (int i = 0; i < n; i++)
        {
                printf("tablou el #%d: ", i + 1);
                cin >> arr[i];
        }
        return arr;
}
void afisf(float* v, int n)
{
        for (int i = 0; i < n; i++)
                printf("v[%d]=%.2f\n", i + 1, v[i]);
}
void afis(int* v, int n)
{
        for (int i = 0; i < n; i++)
                printf("v[%d]=%d\n", i + 1, v[i]);
}
float* calcul(int* v, int n)
{
    float* arr=new float[n];
    for (int i=0; i<n; i++)
        arr[i]=sqrt(v[i]);
    return arr;
}
