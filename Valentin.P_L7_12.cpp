//suma numerelor citite, cu o precizie de 2 zecimale şi numărul lor
//Valentin Ples, grupa 2012
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main()
{
    int n, nr=0;
    printf("Valoarea maxima a sumei: ");
	cin>>n;
	float x, sum=0;
	while (sum<=n)
    {
        cin>>x;
        sum+=x;
        nr++;
    }
    printf("S-au citit %d valori, suma lor totala fiind %.2f", nr, sum);
    return 0;
}
