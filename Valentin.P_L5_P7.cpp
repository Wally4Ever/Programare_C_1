//Lungimea si aria cercului
// Valentin Ples, grupa 2012
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
    int r;
    const float pi=3.14;
    printf(" Raza cercului: ");
    scanf("%d", &r);

    printf("\n Lungime cerc: %10.3f", pi*r*2);
    printf("\n Aria cercului: %10.3f", pi*r*r);
    return 0;
}
