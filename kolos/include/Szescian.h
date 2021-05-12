#ifndef SZESCIAN_H
#define SZESCIAN_H

#include "Bryla.h"


class Szescian : public Bryla // dziedziczenie(public) po klasie Bryla
{
    public:
        Szescian();
        Szescian(string naz, string kol,int a);
        virtual ~Szescian();
        float obliczPolePodstawy();
    protected:

    private:


};

#endif // SZESCIAN_H

