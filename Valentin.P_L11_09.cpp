//Valentin Ples, 2012
/* sirurile initiale introduse (mai
putin de 256 caractere), cel concatenat (sirurile vor fi separate prin spatiu), cuvintele
independente (separate prin spatiu folosind strtoken( )), si numarul lor.*/
#include <iostream>
#include <string.h>
using namespace std;

char **read(int, int&);

int main()
{
    char **sir, *s;
    char delimiters[] = " .,;:!?-";

    int n, i, concat;
    cout<<"Introdu numarul de siruri: ";
    cin>>n;

    sir=read(n, concat);
    cout<<concat;
    char *sirr=new char[concat+1];

    sirr[0]='\0';
    cout<<"\nSirurile introduse sunt:\n";
    for (i=0; i<n; i++)
    {
        cout<<sir[i]<<'\n';
        strcat(sirr, sir[i]);
        strcat(sirr, " ");
    }
    cout<<"\nSirul concatenat este: ";
    cout<<sirr;
    //incercand sa folosim strtok
    char* toto;
    int nrcuv=0;
    toto=strtok(sirr, delimiters);
    while (toto)
    {
        nrcuv++;
        printf("\nCuvantul #%d este %s\n", nrcuv, toto);
        toto=strtok(NULL, delimiters);
    }
    delete sirr;
    delete sir;
    return 0;
}
char **read(int nr, int &concat)
{
    cin.get();
    concat=0;
    char **sir=new char*[nr];
    char *s=new char[100];
    for (int i=0; i<nr; i++)
    {
        printf("Input string #%d: ", i+1);
        cin.getline(s,100);

        concat+=strlen(s)+1;
        sir[i]=new char[strlen(s)+1];
        strcpy(sir[i], s);
    }
    return sir;

}

