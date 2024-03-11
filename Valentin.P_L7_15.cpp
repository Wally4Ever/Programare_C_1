//caracter afisat pe n randuri de n ori
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
    int n, c;
    char x;
    cout<<"Introduceti caracterul urmat de cate ori doriti sa fie afisat: ";
    scanf("%c%d", &x, &n);
    for (int i=0; i<n; i++)
    {
        c=n;
        while (c)
        {
            cout<<x<<' ';
            c--;
        }
        cout<<'\n';
    }
    return 0;
}
