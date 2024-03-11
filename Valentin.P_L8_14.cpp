// Valentin Ples, grupa 2012
// cod morse
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
        int i, j;
        char s[40];

        const string morse[37] = { "    ", ". ___", "___ . . .", "___ . ___ .", "___ . .", ".", ". . ___ .", "___ ___ .", ". . . .", ". .", ". ___ ___ ___", "___ . ___", ". ___ . .",  "___ ___", "___ .", "___ ___ ___", ". ___ ___ .", "___ ___ . ___", ". ___ .", ". . .", "_", ". . ___", ". . . ___", ". ___ ___", "___ . . ___", "___ . ___ ___", "___ ___ . .", ". ___ ___ ___ ___", ". . ___ ___ ___", ". . . ___ ___", ". . . . ___", ". . . . .", "___ . . . .", "___ ___ . . .", "___ ___ ___ . .", "___ ___ ___ ___ .", "___ ___ ___ ___ ___"};
        const char letters[37] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

        cout<<"Introdu sirul de caractere: ";
        cin.getline(s, 40);
        for (i = 0; i < strlen(s); i++)
            for ( j = 0; j < 37; j++)
                if (tolower(s[i]) == letters[j])
                {
                    printf("%c la pozitia %d in cod morse este: ", s[i], i+1);
                    cout<<morse[j]<<'\n';
                }

        return 0;
}
