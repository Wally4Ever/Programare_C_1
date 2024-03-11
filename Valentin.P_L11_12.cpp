
//Valentin Ples, 2012
//olympic_filter

#include <iostream>
#include <stdlib.h>
using namespace std;

int* read(int);
void afis(int*, int);
float med(int*, int );
int maxi(int*, int );
int mini(int*, int );
int cmp(const void*, const void*);
int* olympic_filter (int*, int&, int, int);

int main()
{
        int n, i;
        cout << "Introdu nr. de elemente: ";
        cin >> n;
        int* p;

        cout << "Introdu elementele tabloului: ";
        p = read(n);
        cout<<"Tabloul este: ";
        afis(p, n);

        float media=med(p, n);

        int max=maxi(p, n);
        int min=mini(p, n);

        printf("\nValoarea minima este %d, valoarea maxima este %d\n", min, max);
        printf("\nMedia tabloului este %.2f", media);

        int *olimpic, cn=n;

        olimpic=olympic_filter(p, cn, min, max);

        afis(olimpic, cn);

        printf("\nValoarea medie a nolui tablou este %.2f", med(olimpic, n));

        delete olimpic;
        delete p;
        return 0;
}
int* read(int n)
{
        int* arr = new int[n];
        for (int i = 0; i < n; i++)
        {
                printf("tablou el #%d: ", i + 1);
                cin >> arr[i];
        }
        return arr;
}
void afis(int* v, int n)
{
        for (int i = 0; i < n; i++)
                printf("v[%d]=%d\n", i + 1, v[i]);
}
float med(int *v, int n)
{
    int s=0;
    for (int i=0; i<n; i++)
        s+=v[i];
    return (float)s/n;
}
int maxi (int *v, int n)
{
    int m=v[0];
    for (int i=1; i<n; i++)
        if (v[i]>m)
            m=v[i];
    return m;
}
int mini (int *v, int n)
{
    int m=v[0];
    for (int i=1; i<n; i++)
        if (v[i]<m)
            m=v[i];
    return m;
}
int cresc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int* olympic_filter (int *p, int &n, int min, int max)
{
    int* arr = new int[n-2];
    int nr=0, j=0;
        for (int i = 0; i < n; i++)
            if (p[i]!=min && p[i]!=max)
            {
                arr[j]=p[i];
                j++;
            }
            else
                nr++;
    n-=nr;
    qsort(arr, n, sizeof(int), cresc);
        return arr;

}
