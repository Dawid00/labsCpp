
#include "Tstudent.h"
#include <iostream>
using namespace std;

//definicja konstruktora potomka z jednoczesnym wywolaniem konstruktora przodka
Tstudent::Tstudent(string im, string naz, string ucz,int liczOc) : Tosoba(im,naz)
{
    //cout<<"Dziala konstruktor klasy Tstudent!"<<endl;
    nazwaUczelni = ucz;
    liczbaOcen = liczOc;
    //imie = im;
// nazwisko = naz;
    oceny = new float[liczbaOcen];
    for (int i = 0; i < liczbaOcen; i++)
    {
        oceny[i] = 2;
    }


}


Tstudent::~Tstudent()
{
    // cout<<"Dziala destruktor klasy Tstudent!"<<endl;

    delete []oceny;
}


bool Tstudent::czySesjaZaliczona()
{
    bool stan = true;
    for(int i = 0; i < liczbaOcen; i++)
    {

        if(oceny[i] < 3) stan = false;
    }
    return stan;
}
void Tstudent::wyswietl()
{

    //  cout << "Imie: " << imie << endl << "Nazwisko: " << nazwisko << endl;
    Tosoba::wyswietl();
    cout << "Uczelnia: "  <<nazwaUczelni<<endl;
    cout<<"Oceny z egzaminow w sesji :"<< endl;
    for(int i = 0; i < liczbaOcen; i++)
        cout << oceny[i]<< " ";
    cout<<endl;
    if(czySesjaZaliczona())
    {
        cout<<"Sesja zaliczona! Gratulacje"<<endl;
        cout<<"Srednia ocen: " << obliczSrednia();
    }
    else
    {
        cout<<"Niestety sesja niezaliczona"<<endl;
    }
}
void Tstudent::wczytaj()
{
    Tosoba::wczytaj();
    cout<<"Podaj nazwe uczelni: ";
    cin>>nazwaUczelni;
    cout<<"Podaj liczbe egzaminow w sesji: ";
    cin>>liczbaOcen;
    for(int i  = 0; i < liczbaOcen; i++)
    {

        cout <<"Podaj ocene z egzaminu nr"<<(i+1)<<":";
        cin >> oceny[i];
    }

}
float Tstudent::obliczSrednia()
{
    float srednia = 0;
    float suma = 0;
    for(int i = 0; i < liczbaOcen; i++)
    {
        suma += oceny[i];
    }
    srednia = suma/liczbaOcen;
    return srednia;
}

