
#define _CRT_SECURE_NO_WARNINGS

//Valentin Ples, 2012
//suma, produs a argumentelor din linia de comanda
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int i;
    float nr, suma=0, produs = 1;


    if (argc == 1)
    {
        printf("\n\n\tNu ati introdus numerele de adunat !");
        exit(1);
    }

    for (i = 1; i < argc; i++)
    {
        nr = atof(argv[i]);
        suma += nr;
        produs *= nr;
    }
    printf("\nSuma argumentelor din linia de comanda este %.2f, iar prdusul %.2f\n", suma, produs);
    return 0;
}
