#ifndef TDOMOWNIK_H
#define TDOMOWNIK_H
#include <iostream>
using namespace std;
class Tdomownik
{
    friend class Tsasiad;
    public:

        static int kod;
        Tdomownik(string naz, string sek);
        Tdomownik();
        void wyswietl();
        virtual ~Tdomownik();

        static void setKod(int kd);
        static int getKod();

       friend string sasiad(Tdomownik &domownik);

    protected:

    private:
        string nazwa;
        string sekret;

};

#endif // TDOMOWNIK_H
