//P07
// Valentin Ples, grupa 2012

#include <iostream>

using namespace std;

float op (float, float, float);

int main ()
{
    float a, b, c;

    cout<<"Introdu 3 numere reale:\n";
    cin>>a>>b>>c;
    cout<<"Rezultatul operatiei 1/a+1/b+1/c este: "<<op(a, b, c)<<'\n';
    cout<<"\nIntrodu 3 numere intregi:\n";
    cin>>a>>b>>c;
    cout<<"Rezultatul operatiei 1/a+1/b+1/c este: "<<op(a, b, c)<<'\n';

    return 0;
}

float op (float a, float b, float c)
{
    float x=1/a;
    x+=1/b;
    x+=1/c;
    return x;
}
