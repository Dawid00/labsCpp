#ifndef TSTUDENT_H
#define TSTUDENT_H
#include <iostream>
using namespace std;
float srednia(float *tab);

class Tstudent
{
    public:
        Tstudent();
        void wczytajStudenta();
        float obliczSrednia();
        void wyswietlStudenta();


    private:
        string imie;
        string nazwisko;
        const int liczbaEgzaminow = 3;
        float oceny[3];


};

#endif // TSTUDENT_H
