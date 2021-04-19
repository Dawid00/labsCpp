#ifndef TSTUDENT_H
#define TSTUDENT_H

#include "Tosoba.h"
using namespace std;
class Tstudent : public Tosoba
{
public:
    Tstudent(string im = "Dawid", string naz = "Kiwelp", string ucz = "PL",int liczOc = 1);
    void wczytaj();
    void wyswietl();
    bool czySesjaZaliczona();
    float obliczSrednia();
    virtual ~Tstudent();


protected:
    string nazwaUczelni;
    int liczbaOcen;
    float* oceny;



private:


};

#endif // TSTUDENT_H
