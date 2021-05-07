
#include "Szescian.h"

#include <iostream>
using namespace std;

Szescian::Szescian()
{
   nazwa = "Szescian";
   kolor="czarny";
   bok=1;
   wysokosc= bok;
}
Szescian::Szescian(string naz, string kol,int a):Bryla(naz,kol)
{
bok = a;
wysokosc = bok;
}

Szescian::~Szescian()
{
    //dtor
}


float Szescian::obliczPolePodstawy()
{
 return bok*bok;
}
float Szescian::obliczObjetosc()
{
float pp = obliczPolePodstawy();
return pp*wysokosc;
}

