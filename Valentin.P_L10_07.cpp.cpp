//Valentin Ples, 2012
//preia din linia de comandă şiruri de caractere şi afişează 
//şirul rezultat din concatenarea acestora.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char *argv[])
{
	char s[200];
	s[0] = '\0';

	for (int i = 1; i < argc; i++)
		strcat(s, argv[i]);

	cout << s;
}