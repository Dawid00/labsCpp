#include "TpracownikUmyslowy.h"
#include <iomanip>
TpracownikUmyslowy::TpracownikUmyslowy(string im, string naz, string fir, int pr, float wyn):Tpracownik(im,naz,fir,pr)
{
    wynagrodzenieMiesieczne = wyn;
    obliczWynagrodzenieMiesieczne();
    // cout<<"Dziala konstruktor klasy TpracownikUmyslowy!"<<endl;
}

TpracownikUmyslowy::~TpracownikUmyslowy()
{
    // cout<<"Dziala destruktor klasy TpracownikUmyslowy!"<<endl;
}

void TpracownikUmyslowy::wyswietl()
{

    Tpracownik::wyswietl();
    cout<< "Wynagrodzenie: " <<setw(5) << fixed <<setprecision(2) << wynagrodzenieMiesieczne<< "zl" << endl;
}
void TpracownikUmyslowy::wczytaj()
{
    Tpracownik::wczytaj();
    cout << "Podaj wynagrodzenie miesieczne: ";
    cin >> wynagrodzenieMiesieczne;
    obliczWynagrodzenieMiesieczne();
}
void TpracownikUmyslowy::obliczWynagrodzenieMiesieczne()
{
    wynagrodzenieMiesieczne += (wynagrodzenieMiesieczne * premia) / 100;

}
