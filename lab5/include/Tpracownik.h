#ifndef TPRACOWNIK_H
#define TPRACOWNIK_H
#include "Tosoba.h"
using namespace std;
class Tpracownik : public Tosoba
{
public:
    Tpracownik(string im = "Dawid", string naz = "Kiwelp",string fir="Cisowianka",int pr = 0);

    void wyswietl();
    void wczytaj();

    virtual ~Tpracownik();

protected:
    string nazwaFirmy;
    int premia;

private:
};

#endif // TPRACOWNIK_H
