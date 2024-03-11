

// Valentin Ples, grupa 2012
// verificare parola
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;



int main()
{
        const char parola[20]="MammaMia";
        char s[20];
        int nr=0;
        cout<<"Introdu parola: ";
        do
        {
            if(nr)
                cout<<"\nParola gresita!\n";
            cin.getline(s, 20);
            nr++;

        }while(strcmp(s, parola));

        printf("\nDupa %d incercari ati introdus parola corecta!", nr);

        return 0;
}
