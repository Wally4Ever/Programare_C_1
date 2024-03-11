
/*Numarul de elemente prin care sirurile difera //  Valentin Ples  grupa  2012*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int numar (char *, char*);


int main()
{
    char s[201], x[201];
    char *p=s, *b=x;

    cout<<"Introdu sir de caractere: ";

    cin.getline(s,200);

    cout<<"Introdu alt sir de caractere: ";

     cin.getline(x,200);

     int unu=numar(p, b), doi=numar(b, p);
     printf("\nPrimul tablou difera de al doilea cu %d elemente, viceversa %d si in total %d", unu, doi, unu+doi);

     return 0;
}
int numar(char *p, char *b)
{
    bool ok;
    int nr=0;
    for (int i=0; i<strlen(p); i++)
    {
        ok=true;
        for (int j=0; j<strlen(b) && ok ; j++)
        {
            if (*(p+i)==*(b+j))
                ok=false;
        }
        if (ok)
            nr++;
    }
    return nr;
}
