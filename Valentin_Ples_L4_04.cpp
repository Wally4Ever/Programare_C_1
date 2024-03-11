//P04 
//Valentin Ples, grupa 2012
#include <iostream>
#include <string.h>

using namespace std;

int nr = 0, ok = 0; 
//nr = cate siruri au fost citite
//ok = cate siruri au fost afisate
char s[26], c[26];

void afisare();
void citire();

int main()
{
	citire();
	afisare();
	citire();
	afisare();
	return 0;
}

void citire()
{
	if (nr == 0)
	{
		cout << "Introduceti un sir de maximum 25 de caractere" << '\n';
		cin.getline(s, 26);
	}
	else
	{
		cin.get();
		cout << '\n' << "Introduceti al doilea lea sir de maximum 25 de caractere" << '\n';
		cin.getline(c, 26);
	}
	nr++;
}

void afisare()
{
	if (ok == 0)
	{
		cout << '\n' << "Primul sir este: " << s << '\n';
	}
	else
	{
		cout << '\n' << "Al doilea sir este: " << c;
	}
	ok++;
}