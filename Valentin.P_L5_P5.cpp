//Gruparea in serie si paralel a rezistoarelor / capacitoarelor
// Valentin Ples, grupa 2012
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
float ohm_paralel(float, float);
float ohm_serie(float, float);

int main()
{
    float c1, c2, r1, r2;
    printf("Introduceti valoarile rezistentelor: ");
    scanf("%f%f", &r1, &r2);

    printf("\nRezistenta gruparii in serie este :%.2f", ohm_serie(r1, r2));
	printf("\nRezistenta gruparii in paralel este :%.2f ", ohm_paralel(r1, r2));


    printf("\nIntroduceti valoarile capacitoarelor: ");
	scanf("%f%f", &c1, &c2);

	printf("\nCapacitatea gruparii in paralel este :%.2f ", ohm_serie(c1, c2));
	printf("\nCapacitatea gruparii in serie este :%.2f", ohm_paralel(c1, c2));
    return 0;
}
float ohm_serie(float x1, float x2)
{
	return x1 + x2;
}
float ohm_paralel(float x1, float x2)
{
	return (x1*x2) / (x1 + x2);
}
