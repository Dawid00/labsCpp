#include "Tdomownik.h"

int Tdomownik::kod=4985;
Tdomownik::Tdomownik(string naz, string sek)
{
    nazwa = naz;
    sekret = sek;
}
Tdomownik::~Tdomownik()
{
    //dtor
}


void Tdomownik::wyswietl()
{
cout<<nazwa<<endl<<"kod:"<<kod<<endl;

}

int Tdomownik::getKod()
{
    return kod;
}
void Tdomownik::setKod(int kd)
{
    kod = kd;
}
