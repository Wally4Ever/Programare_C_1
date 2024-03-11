//Valentin Ples, 2012
//inversarea sirului citit din linia de comanda

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include<algorithm>
using namespace std;
int main(int argc, char* argv[])
{
	char s[40];
	strcpy(s, argv[1]);

	reverse(s, s + strlen(s));

	cout << s;

	return 0;
}