// Valentin Ples grupa 2012
// transformare in majuscule
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[21], a[21];
	cout << " Introdu un sir de litere mici: ";
	cin >> s;

	strcpy(a, s); //copiaza sirul citit in sirul "a" pentru a fii modificat aritmetic

	for (int i = 0; i < strlen(a); i++)
		a[i] -= 32;
	cout <<"\n Sirul transformat in majuscule prin operatii aritmetice: "<<a;

	for (int i = 0; i < strlen(s); i++)
	{
		s[i] = s[i] ^ 0x20; //s[i] & 0xDF
	}
	cout << "\n Sirul transformat logic in majuscule este: " << s;

	return 0;
}