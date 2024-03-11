//afis nr. impare
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main()
{
	int n, a;
	printf("Cate valori doriti sa introduceti? ");
	cin>>n;

	int v[n+1];
	for (int i = 0; i < n; i++)
        cin>>v[i];

    cout<<"Valorile impare sunt: ";
    for (int i=0; i<n; i++)
        if (v[i]%2)
            cout<<v[i]<<' ';
    return 0;
}
