//Valentin Ples, 2012
//preia numerele de la tastatură direct ordonate crescător
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


void read_cresc(float*, int);
void afis(float*, int);

int main()
{
    int n;
    float x[20];
    float* v = x;
    cout << "Introdu nr de elemente: ";
    cin >> n;

    cout << "Introdu elementele in ordine CRESCATOARE\n";
    read_cresc(v, n);
    afis(v, n);

    return 0;
}
void read_cresc(float *v, int n)
{
    float x;
    printf("v[%d]=", 1);
    cin >> x;
    *v = x;
    for (int i = 1; i < n; i++)
    {
        do 
        {
            printf("v[%d]=", i + 1);
            cin >> x;
            *(v + i) = x;
            if (*(v + i) < *(v + i - 1))
                cout << "\nVALOARE PREA MICA\n";
        } while (*(v + i) < *(v + i - 1));
        
    }
}
void afis(float *v, int n)
{
    cout << "Tabloul este: " << '\n';
    for (int i = 0; i < n; i++)
        printf("v[%d]=%.2f; ", i + 1, *(v + i));
}

