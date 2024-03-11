
//Valentin Ples, 2012
//numărul studenţilor cu media >= 8
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
void stud(float*, int, int&);
int main()
{
	int n, nr=0;
	cout << "Numarul studentilor din clasa: ";
	cin >> n;
	float v[50];
	for (int i = 0; i < n; i++)
	{
		printf("Studentul %d are media: ", i+1);
		cin >> v[i];
		cout << '\n';
	}
	float* pv;
	pv = v;
	stud(pv, n, nr);
	cout << nr;
	return 0;
}
void stud(float* v, int n, int &nr)
{
	for (int i = 0; i < n; i++)
		if (*(v + i) >= 8)
			nr++;
}