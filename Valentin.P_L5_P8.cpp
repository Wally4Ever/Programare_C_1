// Valentin Ples, grupa 2012
//Să se afișeze durata călătoriei
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int transform (int, int);

int main()
{
    int plec_h, plec_m, sos_h, sos_m;

    printf(" Ora si minutele plecarii din Cluj-Napoca: ");
    scanf("%d:%d", &plec_h, &plec_m);
    printf("\n Ora si minutele sosirii in Brasov: ");
    scanf("%d:%d", &sos_h, &sos_m);

    int min_plec, min_sos, min_calatorie;
    min_plec = transform(plec_h, plec_m); //ora plecarii transformata in minute
    min_sos = transform(sos_h, sos_m); //ora sosirii transformata in minute

    if (min_sos > min_plec)
        min_calatorie = min_sos-min_plec;
    else
        min_calatorie=24*60-min_plec+min_sos;

     printf("\n Durata calatoriei este: %.2d:%.2d", min_calatorie/60, min_calatorie%60);

    return 0;
}
int transform (int a, int b)
{
    return a*60+b;
}
