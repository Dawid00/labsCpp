#ifndef TTOWAR_H
#define TTOWAR_H
#include <iostream>
using namespace std;
class Ttowar
{
public:
    Ttowar();
    Ttowar(string n,float c, int i);
    virtual ~Ttowar();
    void wczytaj();
    void wyswietl();
    float oblicz_wartosc();
protected:
    string nazwa;
    float cena;
    int ilosc;
private:
};

#endif // TTOWAR_H
