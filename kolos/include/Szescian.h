#ifndef SZESCIAN_H
#define SZESCIAN_H

#include "Bryla.h"


class Szescian : public Bryla // dziedziczenie(public) po klasie Bryla
{
    public:
        Szescian();
        Szescian(string naz, string kol,int a);
        virtual ~Szescian();
        float obliczPolePodstawy(); //przeslanianie metody
        float obliczObjetosc(); //przeslanianie metody


    protected:
        int bok; // pole protected - hermetyzacja
        int wysokosc; // pole protected - hermetyzacja
    private:


};

#endif // SZESCIAN_H

