#ifndef TDOKUMENT_H
#define TDOKUMENT_H
#include <iostream>
using namespace std;
struct Data
{
    int rok;
    int miesiac;
    int dzien;

};
class Tdokument
{
    public:
        Tdokument();
        Tdokument(string naz, string nr, int r, int m, int d);
        virtual ~Tdokument();
        void wczytaj();
        void wczytajDate();
        void wyswietl();
    protected:
        string nazwa;
        Data data;
        string numerDokumentu;
    private:
};

#endif // TDOKUMENT_H
