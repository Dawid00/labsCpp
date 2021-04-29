#ifndef TKLIENT_H
#define TKLIENT_H
#include <iostream>
using namespace std;
class Tklient
{
    public:
        Tklient();
        Tklient(string im, string naz, string anip);
        void wczytaj();
        void wyswietl();
        virtual ~Tklient();
    protected:
        string imie;
        string nazwisko;
        string nip;
    private:
};

#endif // TKLIENT_H
