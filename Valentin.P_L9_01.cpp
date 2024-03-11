//Program calculare a produsului scalar
//  Valentin Ples,  grupa  2012
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

void read (int *, int );

void scalar(int *, int *, int );


int main()
{
	int a[500], v[500];

	int n, m;

	int *p = a, *r = v;

	printf("Cate numere in primul tablou: ");
	scanf("%d", &n);
	printf("Cate numere in al doilea tablou: ");
	scanf("%d", &m);

	cout<<"\nIntroduceti elementele din primul tablou:\n";
	read(p, n);
	cout<<"\nAl doilea tablou\n";
	read(r, m);

	if (m == n)
	{
		scalar(p, r, m);
	}
	else
		cout<<"\nDimensiunile nu coincid";

	return false;
}

void scalar(int *p, int *r, int m)
{
	int product = 0;
	for (int i = 0; i < m; i++)
	{
		product += *(p + i)**(r + i);
	}
	printf("\nProdusul scalar este: %d", product);

}
void read(int *p, int n)
{
        for (int i = 0; i < n; i++)
        {
                printf("v[%d]=", i+1);
                cin>>*(p+i);
        }
}
