//Program de caclulare a capacitatii in serie-paralel
// Valentin Ples, grupa 2012
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

float par(float, float);
float se(float, float);

int main()
{
	float c1, c2;

	printf("Introduceti prima valoare pentru primul capacitor: ");
	scanf("%f", &c1);

	printf("\nIntroduceti o valoare pentru al 2-lea capacitor: ");
	scanf("%f", &c2);

	printf("\nCapacitatea gruparii in paralel este :%.3f ", par(c1, c2));

	printf("\nCapacitatea gruparii in serie este :%.3f", se(c1, c2));
	return 0;
}
float par(float x1, float x2)
{
	return x1 + x2;
}
float se(float x1, float x2)
{
	return (x1*x2) / (x1 + x2);
}
