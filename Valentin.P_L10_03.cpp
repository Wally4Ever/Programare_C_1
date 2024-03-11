
//Valentin Ples, 2012
//afisarea caracterelor 1, 3, 5, 7 dintr-un sir
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
	char s[15];
	cout << "Introdu mai mult de 8 caractere: ";
	cin.getline(s, 14);
	if (strlen(s) < 8)
	{
		cout << "\nSir invalid!";
		return 1;
	}
	printf("\npozitie = (caracter pozitie)\n1 = (%c)\n3 = (%c)\n5 = (%c)\n7 = (%c)", *(s+1), *(s+3), *(s+5), *(s+7));

	return 0;

}