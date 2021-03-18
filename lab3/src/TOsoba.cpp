#include "TOsoba.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
TOsoba::TOsoba()
{
    cout<<"Dziala konstruktor domyslny!"<<endl;
    strncpy(imie, "Dawid", 9);
    imie[9] = '\0';
    nazwisko = "Plewik";

    dataUrodzenia.d = 15;
    dataUrodzenia.m = 5;
    dataUrodzenia.r = 1999;
}

TOsoba::TOsoba(char* im, string naz, int rok, int miesiac, int dzien)
{
    cout<<"Dziala konstruktor z parametrami!"<<endl;

    strncpy(imie, im, 9);
    imie[9] = '\0';
    nazwisko = naz;
    dataUrodzenia.d = dzien;
    dataUrodzenia.m = miesiac;
    dataUrodzenia.r = rok;


}
TOsoba::~TOsoba()
{
    cout<<"Dziala destruktor!"<<endl;
}

void TOsoba::wczytaj()
{

    char im[10];
    cout << "Podaj imie: ";
    cin >> im;
    strncpy(imie, im,10);
    cout <<"Podaj nazwisko: ";
    cin>> nazwisko;

    cout <<"Podaj rok urodzenia: ";
    cin>> dataUrodzenia.r;
    cout <<"Podaj miesiac urodzenia: ";
    cin>> dataUrodzenia.m;
    cout <<"Podaj dzien urodzenia: ";
    cin>> dataUrodzenia.d;

}

void TOsoba::wyswietl()
{
    cout<<"Imie: "<< imie << endl << "Nazwisko: "<<nazwisko <<endl << "Data urodzenia: " <<dataUrodzenia.r <<" "<<dataUrodzenia.m <<" "<<dataUrodzenia.d <<" "<<endl;
}
void TOsoba::wyswietl(int rok)
{
    cout<<"Imie: "<< imie << endl << "Nazwisko: "<<nazwisko <<endl << "Wiek: " << rok - dataUrodzenia.r << endl;
}

void TOsoba::info()
{

    int wiek = 2021 - dataUrodzenia.r;

    if (wiek < 18)
    {
        cout<< "Dziecko" <<endl;
    }
    else if(wiek >=18 && wiek < 30)
    {
        cout<<"osoba pelnoletnia"<<endl;
    }
    else if (wiek >30 && wiek < 50)
    {
        cout<<"30+"<<endl;
    }
    else if (wiek >50)
    {
        cout<<"50+"<<endl;
    }
}
void TOsoba::info(int rok)
{




}
