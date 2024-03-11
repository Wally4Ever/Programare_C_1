//Valentin Ples, 2012
//pointeri către șiruri constante folosind funcția strdup
#include <iostream>
#include <string.h>
using namespace std;

char **read(int);

int main()
{
    char **sir;
    int nr, i;
    const char *s[] = {"Lovely informatics", "I'm loving it", "parararam", "JUST DO IT"};

    sir=new char*[5];

    for(i=0; i<4; i++)
    {
        sir[i]=strdup(s[i]);
    }
    cout<<"Sirurile de pe pozitii pare: ";

    for (i=0; i<4; i+=2)
    {
        cout<<sir[i]<<'\n';
        free (sir[i]);
    }
    delete sir;
    return 0;
}


