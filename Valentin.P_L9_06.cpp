
/* afişează caracterele ce compun şirul şi numărul de apariţii ale fiecăruia
//  Valentin Ples  grupa  2012*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

void numar (char *, int*);

int main()
{
    char s[201];

    int v[128]={0};

    char *sir=s;
    int *ven=v;

    cout<<"Introdu sir de caractere: ";

    cin.getline(s,200);
    numar(sir, ven);

    for (int i=0; i<128; i++)
        if (*(ven+i))
            printf("Caracterul %c apare de %d ori\n", (char)i, *(ven+i));
}
void numar (char *sir, int *f)
{
    for (int i=0; i<strlen(sir); i++)
        *(f+(int)*(sir+i))+=1;
}
