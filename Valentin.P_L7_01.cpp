//aria dreptunghiului si daca diagonala egala cu c
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
	int a, b, c;
	printf("Introduceti latura a : ");
	scanf("%d", &a);
	printf("Introduceti latura b : ");
	scanf("%d", &b);
	printf("Introduceti c : ");
	scanf("%d", &c);
	printf("\nAria dreptunghiului este: %d", a*b);
	if ( ((a*a)+(b*b))==(c*c) )
        cout<<"\nDiagnonala este egala cu c";
    else
        cout<<"\nDiagonala este diferita de c";
    return 0;
}
