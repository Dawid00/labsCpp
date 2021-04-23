#include "Tprostokat.h"

Tprostokat::Tprostokat()
{
    nazwa = "prostokat";
    a=1;
    b=2;
}
Tprostokat::Tprostokat(string n,float a,float b)
{
    nazwa = n;
    this->a = a;
    this->b = b;
}
Tprostokat::~Tprostokat()
{}
float Tprostokat::pole()
{
    return a*b;
}
float Tprostokat::obwod()
{
    return (2*a) + (2*b);
}
void Tprostokat::rysuj()
{
    cout<<"Rysuje prostokat"<<endl;
}
