
#ifndef WALEC_H
#define WALEC_H

#include "Bryla.h"


class Walec : public Bryla
{
    public:
        Walec();
        Walec(string naz, string kol,int r, int h);
        virtual ~Walec();
        float obliczPolePodstawy();

    protected:

        int promien;


    private:

};

#endif // WALEC_H

