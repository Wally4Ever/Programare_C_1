
//Valentin Ples, 2012
//suma el negative

#include <iostream>
using namespace std;

float* read(int);
void afis(float*, int);
float neg(float*, int);

int main()
{
        int n, i;
        cout << "Introdu nr. de elemente: ";
        cin >> n;
        float* p;

        cout << "Introdu elementele tabloului: ";
        p = read(n);

        afis(p, n);
        i = neg(p, n);
        printf("\nSuma elementelor negative este %.2f", neg(p, n));
        delete p;
        return 0;
}
float* read(int n)
{
        float* arr = new float[n];
        for (int i = 0; i < n; i++)
        {
                printf("tablou el #%d: ", i + 1);
                cin >> arr[i];
        }
        return arr;
}
void afis(float* v, int n)
{
        for (int i = 0; i < n; i++)
                printf("v[%d]=%.2f\n", i + 1, v[i]);
}
float neg(float* v, int n)
{
        float s = 0;
        for (int i = 0; i < n; i++)
                if (v[i] < 0)
                        s += v[i];
        return s;
}
