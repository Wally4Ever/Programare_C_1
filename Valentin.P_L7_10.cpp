//numar de cfre
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main()
{
    int a, nr=0;
    cout<<" Introdu numar: ";
    scanf("%d", &a);
    while (a)
    {
        nr++;
        a/=10;
    }
    cout<<"\n Numarul de cifre este: "<<nr;
    return 0;
}
