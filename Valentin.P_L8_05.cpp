
// Valentin Ples, grupa 2012
// nume si prenume
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
        char nume[20], prenume[20];
        cout<<"Introdu numele de familie: ";
        cin>>nume;
        cout<<"\nIntrodu prenume: ";
        cin>>prenume;

        nume[0]=toupper(nume[0]);
        prenume[0]=toupper(prenume[0]);
        //conver to uppercase
        printf("%s\t\t%s",nume, prenume);

        return 0;
}

