#include "Tpracownik.h"
using namespace std;
Tpracownik::Tpracownik(string im, string naz,string fir,int pr) : Tosoba(im,naz)
{
    nazwaFirmy = fir;
    premia = pr;
    //cout<<"Dziala konstruktor klasy Tpracownik"<<endl;
}

Tpracownik::~Tpracownik()
{
    //cout<<"Dziala destruktor klasy Tpracownik"<<endl;
}

void Tpracownik::wczytaj()
{

    Tosoba::wczytaj();
    cout<<"Podaj nazwe firmy:";
    cin.ignore();
    getline(cin,nazwaFirmy);

    cout << "Podaj premie w %: ";
    cin >> premia;
}
void Tpracownik::wyswietl()
{
    Tosoba::wyswietl();
    cout<<"Nazwa firmy: "<< nazwaFirmy<<endl;

}
