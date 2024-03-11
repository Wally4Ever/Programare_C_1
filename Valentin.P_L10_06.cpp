//Valentin Ples, 2012
//tablou de pointeri spre şiruri de caractere
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int main()
{
	
	const char* chr[] = { "valoare prea mica ",  "valoare prea mare ", "valoare corecta ", "inca un sir?", "mda"};
	for (int i = 0; i < 5; i++)
		cout << *(chr+i) << '\n';
}