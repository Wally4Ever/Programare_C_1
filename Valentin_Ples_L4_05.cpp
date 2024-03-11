//P05
// Valentin Ples, grupa 2012

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	float sum = 0;

	cout << "Nota de activitate cu pondere de 10%: ";
	cin >> a;
	cout << "\nNota testului practic cu pondere de 30%: ";
	cin >> b;
	cout << "\nNota examenului teoretic cu pondere de 60%: ";
	cin >> c;

	sum = a * 0.1 + b * 0.3 + c * 0.6;

	cout << "\nNota finala a stundetului: " << sum << '\n';
	return 0;
}


