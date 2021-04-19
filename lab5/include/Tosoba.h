#ifndef TOSOBA_H
#define TOSOBA_H
#include <iostream>
#include <string>
using namespace std;
class Tosoba
{
public:

    Tosoba(string im = "Dawid", string naz = "Kiwelp"); // konstruktor z parametrami domyslnymi
    void wczytaj();
    void wyswietl();
    virtual ~Tosoba();

protected:
    string imie;
    string nazwisko;

private:

};

#endif // TOSOBA_H
