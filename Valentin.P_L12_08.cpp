
//Valentin Ples, 2012
//nu inteleg ce imi cere problema asta
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

struct o_struct
{
    int a;
    char x;
    char y[256];
};


int main()
{


    o_struct ok;
    cout << "Val intreaga: ";
    cin >> ok.a;
    cout << "\nCaracter: ";
    cin >> ok.x;
    cout << "\nSir de caractere:\n";
    cin.get();
    cin.getline(ok.y, 255);
    
    o_struct* po_struct=new o_struct;
    po_struct->a = 13;
    po_struct->x = 'z';
    strcpy(po_struct->y, "nu inteleg cerinta asta");
    cout << po_struct->a;
    cout << po_struct->x;
    cout << po_struct->y;
    delete po_struct;
    return 0;
}




