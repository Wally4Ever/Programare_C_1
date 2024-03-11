//copiere valori mai mari decat valoarea medie
//  Valentin Ples,  grupa  2012
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

void read (float *, int );

void afis(float*, int);

void copiat(float*, float*, int, int&);

float valmed(float *, int );

int main()
{
    float v[20], a[20], *p=v, *x=a;
	int n, nr;

	printf("Cate elemente in tablou: ");
	cin>>n;

	read(p, n);

    afis(p, n);

	copiat(p, x, n, nr);

	afis(x, nr);

	return 0;
}
void afis(float *p, int n)
{
        cout << "Tabloul este: " << '\n';
        for (int i = 0; i < n; i++)
                printf("%.0f   ", *(p+i));

        cout<<'\n';
}
void read(float *p, int n)
{
        for (int i = 0; i < n; i++)
        {
                printf("v[%d]=", i+1);
                cin>>*(p+i);
        }
}
float valmed(float *p, int n)
{
	int s = 0;

	for (int i = 0; i < n; i++)
		s += *(p+i);

	return s / n;
}
void copiat(float*p, float*x, int n, int&nr)
{
    nr = 0;
	float val = valmed(p, n);
	for (int i = 0; i < n; i++)
		if (*(p + i) > val)
		{
			*(x+nr) = *(p + i);
			nr++;
		}
}
