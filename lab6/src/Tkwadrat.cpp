#include "Tkwadrat.h"

Tkwadrat::Tkwadrat()
{
    nazwa="kwadrat";
    a=5;
    b=a;
}
Tkwadrat::Tkwadrat(string n, float a)
{
    nazwa = n;
    this -> a = a;
    b = a;
}
Tkwadrat::~Tkwadrat()
{}
void Tkwadrat::rysuj()
{
    cout<<"Rysuje kwadrat"<<endl;
}
