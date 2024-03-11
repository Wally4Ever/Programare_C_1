/*Program de eliminare a caractelelor duplicate //  Valentin Ples  grupa  2012*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

void  eliminam(char *);


int main()
{
    char s[201];
    char *p=s;
    cout<<"Introdu sir de caractere: ";

    cin.getline(s,200);

    eliminam(p);

    cout<<s;

    return 0;
}

void  eliminam(char  *p )
{
    int i=0, j;
    while (i<strlen(p))
    {
        j=i+1;
        while (j<strlen(p))
        {
            if(*(p+i)==*(p+j))
                strcpy(p+j, p+j+1);
            else
                j++;
        }
        i++;
    }
}
