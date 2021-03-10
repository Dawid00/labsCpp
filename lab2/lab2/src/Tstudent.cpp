#include "Tstudent.h"
#include <iomanip>
#include <iostream>
using namespace std;

float srednia(float *tab, int tabSize)
{
    float suma = 0;
    for(int i = 0 ; i < tabSize; i++)
    {
        suma += tab[i];
    }
    return suma / (float)tabSize ;
}

Tstudent::Tstudent()
{

}

void Tstudent::wczytajStudenta()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    for (int i = 0; i < liczbaEgzaminow; i ++)

    {
        cout << "Podaj ocene z egzaminu nr " << i + 1<<": ";
        cin >> oceny[i];
    }
}
float Tstudent::obliczSrednia()
{
    return srednia(oceny, liczbaEgzaminow);
}

void Tstudent::wyswietlStudenta()
{
    cout<<endl<<"Student " << imie << " " << nazwisko << " zakonczyl 1 semestr ze srednia:" <<  setprecision(3) << obliczSrednia() << endl;
}
