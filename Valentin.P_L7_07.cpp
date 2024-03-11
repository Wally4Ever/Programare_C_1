//divizorii unui număr
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main()
{
    int x;
    cout<<" Introdu numar: ";
    cin>>x;
    cout<<"\n Diviozrii numarului sunt: ";
    for (int i=1; i<=x/2; i++)
        if (x%i==0)
            cout<<i<<' ';
    cout<<x;
    return 0;
}
