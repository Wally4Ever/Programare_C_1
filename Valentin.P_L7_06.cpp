//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int cmmdc (int, int);
int main()
{
    int a, b;
    cout<<"Introdu cele doua numere: ";
    cin>>a>>b;
    cout<<"CMMDC-ul lor este: ";
    cout<<cmmdc(a,b);
}
int cmmdc(int x, int y)
{
    int r=x%y;
    while (r)
    {
        x=y;
        y=r;
        r=x%y;
    }
    return y;
}
