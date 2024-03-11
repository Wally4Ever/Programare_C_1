//Determinarea ipotenuzei si a perimetrului unui triunghi
// Valentin Ples, grupa 2012
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>

using namespace std;

float pitagora (float, float);

int main()
{
    float c1, c2, ip;
    printf(" Prima cateta: ");
    scanf(" %f", &c1);
    printf("\n A doua cateta: ");
    scanf(" %f", &c2);

    ip=pitagora(c1, c2);
    printf("\n Ipotenuza triunghiului are lungimea: %.2f", ip);
    printf("\n Perimetrul triunghiului este: %.2f", c1+c2+ip);
    return 0;
}
float pitagora(float a, float b)
{
    a*=a;
    b*=b;
    return sqrt(a+b);
}
