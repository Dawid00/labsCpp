#include "TosobaS.h"
#include <string>
#include <iostream>
#include <string.h>
using namespace std;


TosobaS::TosobaS()
{
    liczbaObiektow += 1;
    strncpy(this -> imie, "Dawid", 20);
    strncpy(this -> nazwisko, "Kowalski", 20);
    this -> wiek = 21;
}

TosobaS::TosobaS(char *nazwisko, char *imie, int wiek)
{
    strncpy(this -> imie, imie, 20);
    strncpy(this -> nazwisko, nazwisko, 20);
    this -> wiek = wiek;
    liczbaObiektow += 1;
}
TosobaS::~TosobaS()
{
    liczbaObiektow -= 1;
    cout<<"Wywolanie destruktora, usniecie obiektu, aktualna liczba obiektow klasy TosobaS wynosi: "<< TosobaS::ile()<<endl;

}
void TosobaS::podajDane()
{

    cout << "Podaj imie: ";
    cin.getline(this->imie,DL);
    cout << "Podaj nazwisko: ";
    cin.getline( this -> nazwisko,DL);
   cout << "Podaj wiek: ";
   cin>> this->wiek;
}

void TosobaS::wyswietl()
{
    cout<< this -> imie << " " << this -> nazwisko << endl;
    cout << "Wiek: " << this->wiek<<endl;

}
