#include "TpracownikFizyczny.h"
#include <iomanip>
TpracownikFizyczny::TpracownikFizyczny(string im, string naz,string fir,int pr,int liczG, float st):Tpracownik(im,naz,fir,pr)
{

    liczbaGodzin = liczG;
    stawka = st;
    obliczWynagrodzenie();
// cout<<"Dziala konstruktor klasy TpracownikFizyczny!"<<endl;
}

TpracownikFizyczny::~TpracownikFizyczny()
{
// cout<<"Dziala destruktor klasy TpracownikFizyczny!"<<endl;
}

void TpracownikFizyczny::wczytaj()
{
    Tpracownik::wczytaj();
    cout << "Podaj liczbe przepracowanych godzin: ";
    cin >> liczbaGodzin;
    cout << "Podaj stawke godzinowa: ";
    cin >> stawka;
    obliczWynagrodzenie();
}
void TpracownikFizyczny::wyswietl()
{

    Tpracownik::wyswietl();
    cout<< "Liczba przepracowanych godzin:" << liczbaGodzin << endl;
    cout<< "Stawka godzinowa:" <<  stawka <<"zl " << endl;
    cout<< "Wynagrodzenie: " << setw(5) << fixed <<setprecision(2) << wynagrodzenie<< "zl" << endl;
}
void TpracownikFizyczny::obliczWynagrodzenie()
{
    wynagrodzenie = stawka * liczbaGodzin;
    wynagrodzenie += (wynagrodzenie * premia) / 100;

}
