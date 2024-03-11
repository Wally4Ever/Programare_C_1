//determină cel mai mare număr prim mai mic decât numărul dat
//determină toate numerele prime mai mici decât numărul dat
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
bool prim(int);
void afis(int, int&);

int main()
{
    int n, x;
    cout<<"Introdu numarul: ";
    cin>>n;
    afis (n, x);
    printf("\nCel mai mare numar prim mai mic decat %d este: %d", n, x);
    return 0;
}
bool prim(int x)
{
    for (int i=2; i<=x/2; i++)
        if (x%i==0)
            return false;
    return true;
}
void afis(int n, int& x)
{
    printf("Numerele prime mai mici decat %d sunt: ", n);

    for (int i=2; i<n; i++)
        if (prim(i))
        {
            cout<<i<<' ';
            x=i;
        }
}
