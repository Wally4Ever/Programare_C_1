//cmmmc
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS
int cmmdc(int, int);

using namespace std;

int main()
{
    int a, b;
    cout<<"Introdu valorile: ";
    cin>>a>>b;
    printf("CMMMC-ul numerelor este: %d", (a*b)/cmmdc(a,b));
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
