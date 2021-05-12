
#include "Walec.h"
#include "Bryla.h"
#include <iostream>
#include <cmath>
using namespace std;

Walec::Walec()
{
nazwa = "Walec";
kolor = "czarny";
promien = 1;
wysokosc = 1;
}

Walec::Walec(string naz, string kol,int r,int h):Bryla(naz,kol)
{
promien = r;
wysokosc = h;
}


Walec::~Walec()
{
    //dtor
}


float Walec::obliczPolePodstawy()
{
 return M_PI * pow(promien,2);
}


