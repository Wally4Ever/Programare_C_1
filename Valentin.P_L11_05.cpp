
//Valentin Ples, 2012
//valoarea medie a celor N elemente şi calculaţi Mn=(sum(pow((xi-xmed),n))/N

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
using namespace std;

void read(int);
void afis(int);
float sum(float*, int);
float* deviatie(int);

float *p;

int main()
{
        int n, i, what;
        cout << "Introdu nr. de elemente: ";
        cin >> n;

        cout << "Introdu elementele tabloului: ";
        read(n);

        afis(n);
        float s=sum(p, n);
        float medie=s/n;

        float *dev=deviatie(n);
        for (int i = 0; i < n; i++)
                printf("v[%d]=%.2f\n", i + 1, dev[i]);
        cout<<"Mn=(sum(pow((xi-xmed),n))/N pentru valorile 1, 2, 3:\n";
        for (int k=1; k<4; k++)
        {
            s=0;
            for (i=0; i<n; i++)
                s+=pow(dev[i], k);
            s/=n;
            printf("Cand n este %d rezultatul este %.2f\n", k, s);
        }
        free(p);
        free(dev);
        return 0;
}
void read(int n)
{
        srand(time(NULL));
        p = (float*)malloc(n*sizeof(float));
        for (int i = 0; i < n; i++)
            p[i]=rand()%100;
}
void afis(int n)
{
        for (int i = 0; i < n; i++)
                printf("v[%d]=%.2f\n", i + 1, p[i]);
}
float sum(float *v, int n)
{
    float s=0;
    for (int i=0; i<n; i++)
        s+=v[i];
    return s;
}
float* deviatie(int n)
{
    float medie=sum(p, n)/n;
    float *arr=(float*)malloc(n*sizeof(float));
    for (int i=0; i<n; i++)
        arr[i]=p[i]-medie;
    return arr;
}
