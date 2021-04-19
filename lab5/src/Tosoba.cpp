#include "Tosoba.h"

Tosoba::Tosoba(string im, string naz)  // konstruktor z parametrami domyslnymi
{
// cout<<"Dziala konstruktor klasy Tosoba!"<<endl;
    imie = im;
    nazwisko = naz;
}

Tosoba::~Tosoba()
{
    //  cout<<"Dziala destruktor klasy Tosoba!"<<endl;
}
void Tosoba:: wczytaj()
{
    cout<<"Podaj imie:";
    cin>>imie;
    cout<<"Podaj nazwisko:";
    cin>> nazwisko;

}
void Tosoba::wyswietl()
{
    cout<<"Imie: " << imie << endl <<"Nazwisko: " <<nazwisko <<endl;
}
