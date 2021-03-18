#ifndef TOSOBA_H
#define TOSOBA_H
#include <iostream>
using namespace std;
struct data
{
 int d, m, r;
};

class TOsoba
{
    public:
    TOsoba();
    TOsoba(char* im, string naz,int rok, int miesiac, int dzien);
    virtual ~TOsoba();

    void wczytaj();
    void wyswietl();
    void wyswietl(int rok);
    void info();
    void info(int rok);

    protected:

    private:
        char imie[10];
        string nazwisko;
        data dataUrodzenia;
};

#endif // TOSOBA_H
