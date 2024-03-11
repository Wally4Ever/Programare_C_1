//impartire prin scadere
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main()
{
    int a, b, nr=0;
    cout<<" Introdu numerele care vor fii impartite: ";
    scanf("%d/%d", &a, &b);
    while (a>=b)
    {
        nr++;
        a-=b;
    }
    cout<<"\n Rezultatatul este: "<<nr;
    return 0;
}

