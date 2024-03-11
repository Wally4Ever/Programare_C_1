//afis nr divizibile cu 3
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
    int n;
    printf("Cate valori doriti sa introduceti? ");
	cin>>n;
	cout<<"Introduceti valorile: ";
	int v[n+1];
	for (int i = 0; i < n; i++)
        cin>>v[i];

    cout<<"Valorile divizibile cu 3 sunt: ";
    for (int i=0; i<n; i++)
        if (v[i]%3==0)
            cout<<v[i]<<' ';
    return 0;
}
