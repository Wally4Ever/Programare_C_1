//introduc numere întregi, până la tasta ESC
//average value of the odd positive numbers
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
    int sum=0, nr=0;
    char n;
    cout<<"Introduceti x cand vreti sa finalizati citirea:\n";
    //nu se intampla nimic cand apas <ESC>
    cin>>n;
    while (n != 'x')//ar trebui sa fie !=(char)27, dar <ESC> nu se inregistreaza
    {
        sum+=n-'0';
        nr++;
        cin>>n;
    }
    printf("S-au citit %d numere iar media lor este %.2f", nr, (float)sum/nr);

    return 0;
}
