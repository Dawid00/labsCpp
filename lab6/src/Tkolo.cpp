#include "Tkolo.h"
#include <cmath>
Tkolo::Tkolo()
{
    nazwa = "kolo";
    promien = 1;
}
Tkolo::Tkolo(string n, float r)
{
    promien = r;
    nazwa = n;
}

Tkolo::~Tkolo()
{}
float Tkolo::pole()
{
    return M_PI * pow(promien,2);
}
float Tkolo::obwod()
{
    return 2*M_PI*promien;
}
void Tkolo::rysuj()
{
    cout<<"Rysuje kolo"<<endl;
}
