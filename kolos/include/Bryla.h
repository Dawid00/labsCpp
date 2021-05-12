#ifndef BRYLA_H
#define BRYLA_H
#include <string>
using namespace std;

class Bryla // klasa abstrakcyjna
{
public:

    Bryla(); //konstruktor domyslny
    Bryla(string naz, string kol); //konstruktor  z parametrami
    virtual ~Bryla(); //destruktor
    void info(); //metoda
    virtual float obliczPolePodstawy()=0;
    float obliczObjetosc();


protected:
    string kolor; //pole
    string nazwa; //pole
    int bok;
    int wysokosc;

private:
};

#endif // BRYLA_H
