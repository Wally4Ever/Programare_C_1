// Valentin_Ples_L4_01.cpp
/* Medie aritmetica a trei numere neintregi */
//Valentin Ples, grupa 2012

#include <iostream>

using namespace std;
float a, b, c;

float med();
void read();

int main()
{
	cout << "Introduceti trei numere " << endl << "Primul numar: ";
	read();
	med();
	cout << "Media aritmetica a numerelor introduse este: " << med();
	
	return false;
}

float med()
{
	float d = (a + b + c) / 3;
	return d;
}

void read()
{
	cin >> a;
	cout << "Al doilea numar: ";
	cin >> b;
	cout << "Al treilea lea numar: ";
	cin >> c;
}