//produs prin adunare
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main()
{
    int a, b, c;
    cout<<" Introdu numerele care vor fii inmultite: ";
    scanf("%d*%d", &a, &b);
    c=a;
    for (int i=1; i<b; i++)
        a+=c;
    cout<<"\n Rezultatatul este: "<<a;
    return 0;
}
