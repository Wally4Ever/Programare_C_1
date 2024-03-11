//P06
// Valentin Ples, grupa 2012

#include <iostream>
#include <string.h>

using namespace std;

int c;
float a;
char s[25];

void citire();
void afisare();

int main()
{
	citire();
	afisare();
	return 0;
}

void citire()
{
	cout << "Introduceti primul numar: ";
	cin >> c;
	cout << endl << "Introduceti al doilea numar: ";
	cin >> a;
	cout << endl << "Introduceti sirul de caracter, de maximum 24 de caractere: ";
	cin.get();
	cin.getline(s, 25);
}

void afisare()
{
	cout << endl << "Primul numar este: " << c << endl;
	cout << "Al doilea numar este: " << a << endl;
	cout << "Sirul de caractere citit este: " << s;
}