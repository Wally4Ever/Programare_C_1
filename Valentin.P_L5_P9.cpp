// Valentin Ples, grupa 2012
/* Două maşini se deplasează una spre cealaltă cu vitezele v1 şi v2,
plecând din două oraşe situate la distanţa d=100km
Timpul dupa care se intalnesc exprimat in minute*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

float timp(int, int, int);

int main()
{
    int v1, v2, d;
    float t;

    printf(" Distanta dintre cele doua masini (km): ");
    scanf("%d", &d);
    printf("\n Viteza primei masini (km/h): ");
    scanf("%d", &v1);
    printf("\n Viteza celei de a 2-a masini (km/h): ");
    scanf("%d", &v2);

    t=timp(v1, v2, d);
    printf("\n Masinile se intalnesc dupa %.0f minute", t*60);
}
float timp(int a, int b, int d)
{
    //d=d1+d2
    //d1=v1*t; d2=v2*t
    return (float)d/(a+b);
}
