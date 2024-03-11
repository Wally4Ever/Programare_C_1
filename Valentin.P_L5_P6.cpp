// Valentin Ples, grupa 2012
//Numele a 2 studenți și nota fiecăruia la programare. Formatare afisari
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s1[30], s2[30];
    float n1, n2;
    printf(" Numele primului student: ");
    scanf(" %[^\n]s", s1);
    printf ("\n Nota obtinuta la programare: ");
    scanf(" %f", &n1);

    printf("\nNumele celui de al doilea student: ");
    scanf(" %[^\n]s", s2);
    printf ("\n Nota obtinuta la programare: ");
    scanf(" %f", &n2);

    printf(" %20s %.2f", s1, n1);
    printf("\n %-20s %.2f", s2, n2);
    printf("\n Media lor este: %.2f", (n1+n2)/2);
    return 0;
}
