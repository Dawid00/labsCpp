#include "Tfigura.h"

Tfigura::Tfigura()
{
    nazwa = "figura";
}
Tfigura::Tfigura(string n)
{
    nazwa = n;
}
Tfigura::~Tfigura()
{}
string Tfigura:: nazwaFigury()
{
    return nazwa;
}
void Tfigura::info()
{
    cout << "Nazwa figury: " << nazwaFigury() << endl;
}
void Tfigura::rysuj()
{
    cout << "Rysuje " << nazwaFigury() << endl;
}

void Tfigura::wyswietl()
{
    info();
    rysuj();
    cout << "Pole = "<< pole() << endl;
    cout << "Obwod = " << obwod() << endl;

}
float Tfigura::pole()
{
    return 0;
}
float Tfigura::obwod()
{
    return 0;
}
