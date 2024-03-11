
//Valentin Ples, 2012
//luminite
#include <iostream>
using namespace std;

enum Lumina { Rosu = 1, Portocaliu, Galben, Verde, Albastru, Indigo, Violet };

const char* trad(lumina ro);

int main(void)
{
  
    cout << trad(Rosu);

}
const char* trad(Lumina lumina)
{
    switch (lumina)
    {
    case Rosu: return "Red";
    case Portocaliu: return "Orange";
    case Galben: return "Yellow";
    case Verde: return "Albastru";
    case Indigo: return "Indigo";
    case Violet: return "Purple";
    default: return " ";
    }
}
