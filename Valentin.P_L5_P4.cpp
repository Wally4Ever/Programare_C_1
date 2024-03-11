//ax+b=0.
// Valentin Ples, grupa 2012
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    printf(" Introduceti doi coeficienti intregi ai unei ecuatii de gradul 1");

    printf("\n Coeficientul lui x: ");
    scanf("%d", &a);

    printf("\n Coeficient: ");
    scanf("%d", &b);

    printf("\n X este egal cu: %.2f", (float)-b/a);
    return 0;
}
