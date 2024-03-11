// Valentin_Ples_L4_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Medie geometrica a doua numere intregi
//
//Valentin Ples, grupa 2012

#include <iostream>
#include <cmath>

using namespace std;
int a, b;
void read();
float mg();

int main()
{
	cout << "Introduceti cele doua numere" << endl;
	read();
	cout << "Media geometrica a celor doua numere este: " << mg();
	return false;
}

void read()
{
	cout << "Primul numar este: ";
	cin >> a;
	cout << "Al doilea numar este: ";
	cin >> b;
}

float mg()
{
	return sqrt(a * b);
}