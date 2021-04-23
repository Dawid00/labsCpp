#ifndef TFIGURA_H
#define TFIGURA_H
#include <string>
#include <iostream>
using namespace std;

class Tfigura
{
public:
    Tfigura();
    Tfigura(string n);
    virtual ~Tfigura();
    void info();
    virtual void rysuj();
    virtual float pole();
    virtual float obwod();
    string nazwaFigury();
    void wyswietl();

protected:
    string nazwa;

private:
};

#endif // TFIGURA_H
