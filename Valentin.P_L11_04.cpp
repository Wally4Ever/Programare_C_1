//Valentin Ples, 2012
//matrice de caractere
#include <iostream>
#include <string.h>
using namespace std;

char **read(int);

int main()
{
    char **sir, *s;
    int nr, i;
    cout<<"Introdu numarul de siruri: ";
    cin>>nr;

    sir=read(nr);

    cout<<sir[0];
}
char **read(int nr)
{
    char **sir=new char*[nr];
    char *s=new char[100];
    for (int i=0; i<nr; i++)
    {
        printf("Input string #%d", i+1);
        cin>>s;
        sir[i]=new char[strlen(s)+1];
        strcpy(sir[i], s);
    }
    return sir;

}
