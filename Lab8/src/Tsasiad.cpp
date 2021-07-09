#include "Tsasiad.h"

Tsasiad::Tsasiad()
{
    nazwa = "Roman";
}
Tsasiad::Tsasiad(string naz)
{
    nazwa = naz;
}
Tsasiad::~Tsasiad()
{
    //dtor
}

void Tsasiad::info(Tdomownik &domownik)
{
    cout<<"Ja sasiad "<<nazwa<<" znam sekret domownika " << domownik.nazwa<<":"<<domownik.sekret<<" i kod do ich domu:"<<domownik.kod<<endl;
}
