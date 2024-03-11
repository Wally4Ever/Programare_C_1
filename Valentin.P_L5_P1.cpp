//Program de caclulare a Rezistentei in serieparalel
// Valentin Ples, grupa 2012*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

float se(float, float);
float par(float, float);

int main()
{
	float r1, r2;

	printf("Introduceti prima valoare pentru prima rezistenta: ");
	scanf("%f", &r1);

	printf("\nIntroduceti o valoare pentru a 2 a rezistenta: ");
	scanf("%f", &r2);

	printf("\nRezistenta gruparii in serie este :%-.4f", se(r1, r2));

	printf("\nRezistenta gruparii in paralel este :%-.4f ", par(r1, r2));
	return 0;
}
float se(float x1, float x2)
{
	return x1 + x2;
}
float par(float x1, float x2)
{
	return (x1*x2) / (x1 + x2);
}
