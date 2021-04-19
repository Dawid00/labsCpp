#ifndef TPRACOWNIKUMYSLOWY_H
#define TPRACOWNIKUMYSLOWY_H

#include <Tpracownik.h>


class TpracownikUmyslowy : public Tpracownik
{
    public:
        TpracownikUmyslowy(string im = "Dawid", string naz = "Kiwelp",string fir="Cisowianka",int pr = 0, float wyn = 3000);
        virtual ~TpracownikUmyslowy();
        void wyswietl();
        void wczytaj();
        void obliczWynagrodzenieMiesieczne();

    protected:
        float wynagrodzenieMiesieczne;

    private:
};

#endif // TPRACOWNIKUMYSLOWY_H
