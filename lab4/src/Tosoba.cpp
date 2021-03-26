#include "Tosoba.h"
#include "Tdata.h"
#include <iostream>
#include <string>

using namespace std;
Tosoba::Tosoba()
{

    this -> imie = "Jan";
    this -> nazwisko = "Nowak";
    this -> motto = "100% albo nic";

}


Tosoba::Tosoba(string imie, string nazwisko, Tdata d)
{

    this -> imie = imie;
    this -> nazwisko = nazwisko;
    this -> dataUr = d;
    this -> motto = "100% albo nic";

}


//Wersja druga
/*Tosoba::Tosoba(const string & imie, const string & nazwisko, const Tdata & d)
{

    this->imie = imie;
    this->nazwisko = imie;
    this-> dataUr = d;
    this-> motto = "100% albo 0";

}
*/
void Tosoba::wczytaj()
{

    cout << "Podaj imie: ";
    cin >> this -> imie;
    cout << "Podaj nazwisko: ";
    cin >> this -> nazwisko;
    cout << "Podaj Twoje motto: ";
    cin.ignore(); // bez tego nie moge wczytac motto tak jakby wczytuje enter(znak \n) z poprzedniego cin
    getline(std::cin,this -> motto);
    cout << "Podaj date urodzenia:" << endl;
    this -> dataUr.wczytaj();


}

void Tosoba::wyswietl()
{
    cout<< this -> imie << " " << this -> nazwisko << endl;
    cout<<"motto: "<<motto<<endl;
    cout << "Data urodzenia:";
    this -> dataUr.wyswietl();
}

string Tosoba::getNazwiskoImie()
{
    string nazwiskoImie = this -> nazwisko + " " + this -> imie;
    return nazwiskoImie;
}


int Tosoba::roznicaWieku(Tosoba & partner)
{
    return abs(this -> dataUr.getR() - partner.dataUr.getR());
}
Tosoba Tosoba::dluzszeNazwisko(Tosoba & partner)
{
    if(this -> nazwisko.length() > partner.nazwisko.length())
    {
        return *this;
    }
    else
    {
        return partner;
    }
}

