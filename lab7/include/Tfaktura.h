#ifndef TFAKTURA_H
#define TFAKTURA_H
#include "Tdokument.h"
#include "Tklient.h"
#include "Ttowar.h"

class Tfaktura : public Tdokument
{
public:
    Tfaktura(string naz, string nr, int r, int m, int d,int pozycje,Tklient* klient);
    Tfaktura();
    virtual ~Tfaktura();
    void wczytaj();
    void wczytajTowary();
    void wyswietl();
protected:
    Tklient* klient;
    Ttowar* listaTowarow;
private:
    float wartosc;
    void obliczWartosc();
    int liczbaPozycji;
};

#endif // TFAKTURA_H
