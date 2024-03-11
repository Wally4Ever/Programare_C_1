// Valentin Ples grupa 2012
/*Să se scrie un program care monitorizează un canal de 16/32/64 biţi. Pentru aceasta citiţi de la
tastatură o valoare întregă fără semn a care va fi afişată în zecimal, binar, octal şi hexazecimal.
Folosiţi o funcţie pentru conversia numerelor din baza 10 în baza 2. Implementaţi o altă funcţie
numită getsets() care primeşte trei valori ca parametri:
- x: valoarea citită de la tastatură
- p: poziţia unui bit din cei 16/32 sau 64 de biţi (numărând de la dreapta)
- n: numărul de biţi care vor fi extraşi din tabel.
Funcţia returnează, aranjaţi spre dreapta, acei n biţi ai valorii x, pornind de la poziţia p, unde
p<8*sizeof(x) şi p>n. Afişaţi rezultatul în binar, octal şi hexazecimal.*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


void bin(int);
int getsets (int, int, int);
int main()
{
	unsigned int a;
	cout << " Introdu un intreg: ";
	cin >> a;
	printf(" Zecimal: %d \n Octal: %o \n Hexa: %x", a, a, a);
	cout<<'\n'<<" Binar: ";
	bin(a);
	printf("\n Din functie:\n Octal: %o\n Hexa: %x\n Binar: ", getsets(a, 2, 5), getsets(a, 2, 5));
	bin(getsets(a, 2, 5));
}
void bin(int a)
{
    while (a)
        {
                printf("%d", a & 1);
                a >>= 1;
        }
}
int getsets(int x, int p, int n)
{
    return (((1 << n) - 1) & (x >> (p - 1)));
}
