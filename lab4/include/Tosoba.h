#ifndef TOSOBA_H
#define TOSOBA_H
#include "Tdata.h"
#include <string>
using namespace std;
class Tosoba
{

 private:
    string imie;
    string nazwisko;
    string motto;
    Tdata dataUr;

    public:
        Tosoba();
       Tosoba(string imie, string nazwisko, Tdata d);
        //Wersja druga
        //Tosoba::Tosoba(const string & imie, const string & nazwisko, const Tdata & d;

        void wczytaj();
        void wyswietl();
        string getNazwiskoImie();
        int roznicaWieku(Tosoba &partner);
        Tosoba dluzszeNazwisko(Tosoba &partner);



};

#endif // TOSOBA_H
