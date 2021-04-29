#include "../include/Ttowar.h"
#include <iomanip>
Ttowar::Ttowar()
{
    nazwa = "towar";
    cena = 0;
    ilosc = 0;
}

Ttowar::Ttowar(string n,float c, int i)
{

    nazwa = n;
    cena = c;
    ilosc = i;
}
Ttowar::~Ttowar()
{
    //dtor
}
void Ttowar::wyswietl()
{
    cout<<setw(30)<<nazwa<<setw(15)<<fixed<<setprecision(2)<<cena<<" zl"<<setw(15)<<ilosc<<endl;

}

void Ttowar::wczytaj()
{

    cout<<"Podaj nazwe towaru:";
    cin>>nazwa;
    cout<<"Podaj cene towaru:";
    cin>>cena;
    cout<<"Podaj ilosc towaru:";
    cin>>ilosc;


}
float Ttowar::oblicz_wartosc()
{
    return cena * ilosc;
}

