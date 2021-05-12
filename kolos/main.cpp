#include <iostream>
#include "Bryla.h"
#include "Walec.h"
#include "Szescian.h"
using namespace std;

int main()
{


Szescian szescian("ABCDEFGH","czerwony",3); // Tworzenie obiektu szescian
szescian.info();
cout<<endl<<endl;
Walec walec;
walec.info();
cout<<endl<<endl;
Walec walec1("duzy walec","zielony",3,5);
walec1.info();

    return 0;
}
