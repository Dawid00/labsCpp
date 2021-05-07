
#ifndef WALEC_H
#define WALEC_H

#include "Bryla.h"


class Walec : public Bryla  // klasa walec jest podklas¹ a klasa bry³a jest nadklas¹
{
    public:
        Walec();
        Walec(string naz, string kol,int r, int h);
        virtual ~Walec();
        float obliczPolePodstawy();
        float obliczObjetosc();

    protected:

        int promien;
        int wysokosc;
    private:

};

#endif // WALEC_H

