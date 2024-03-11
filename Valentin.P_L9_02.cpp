/*Program  de  generare  a  numerelor  si  eliminare  a  celor  impare  //    Valentin Ples   grupa    2012  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include  <stdlib.h>
#include  <time.h>
using namespace std;

void afis(int*, int);

void  eliminam(int *, int& );


int  main()
{
	int  v[20], *p = v, n = 20;

	srand(time(NULL));

	for (int i = 0; i < n; i++)
		*(p + i) = rand() % 50;


	afis(p, n);

	cout<<'\n';

	eliminam(p, n);

	afis (p, n);

	return  0;
}
void afis(int *p, int n)
{
        cout << "Tabloul este: " << '\n';
        for (int i = 0; i < n; i++)
                printf("%d   ", *(p+i));
}
void  eliminam(int  *p, int  &n)
{
    int i=0;
    while (i<n)
		if (*(p+i)%2==1)
        {
            for (int j=i; j<n-1; j++)
                *(p+j)=*(p+j+1);
            n--;
        }
        else
            i++;
}
