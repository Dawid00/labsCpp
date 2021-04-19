#ifndef TPRACOWNIKFIZYCZNY_H
#define TPRACOWNIKFIZYCZNY_H
#include "Tpracownik.h"

class TpracownikFizyczny : public Tpracownik
{
public:
    TpracownikFizyczny(string im = "Dawid", string naz = "Kiwelp",string fir="Cisowianka",int pr = 0,int liczG = 160, float st = 15.5);
    virtual ~TpracownikFizyczny();
    void wyswietl();
    void wczytaj();
    void obliczWynagrodzenie();

protected:
    int liczbaGodzin;
    float stawka;
    float wynagrodzenie;

private:
};

#endif // TPRACOWNIKFIZYCZNY_H
