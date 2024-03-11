
// Valentin Ples, grupa 2012
// inversare sir de caractere
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;
void inversare(char[], char[]);

int main()
{
        char s[20], r[20];

        cout<<"Introdu sirul de caractere: ";
        cin.getline(s,20);
        inversare(s, r);
        cout<<r;

        return 0;
}

void inversare(char s[], char r[])
{
    int nr=strlen(s);
    for (int i=0; i<nr; i++)
        r[i]=s[nr-1-i];
}
