#ifndef TOSOBAS_H
#define TOSOBAS_H

const int DL=20;

class TosobaS
{
    public:

        TosobaS();
        TosobaS(char *nazwisko, char *imie, int wiek);
        void podajDane();
        void wyswietl();
        ~TosobaS();
        static int ile()
        {
            return liczbaObiektow;
        };

    protected:
        char nazwisko[DL];
        char imie[DL];
        int wiek;

    private:
        static int liczbaObiektow;

};

#endif // TOSOBAS_H
