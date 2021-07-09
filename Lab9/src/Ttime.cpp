#include "Ttime.h"

Ttime::Ttime(int godz, int m)
{
    godziny = godz;
    minuty = m;
    if(minuty >= 60)
    {
        int temp = minuty / 60;
        godziny+=temp;
        minuty = minuty%60;
    }
}

Ttime::~Ttime()
{
}
const int Ttime::getGodziny()
{
    return this->godziny;
}
const int Ttime::getMinuty()
{
    return this->minuty;
}
Ttime Ttime::operator-(Ttime inna)
{
    int roznica = ((this->godziny *60) + this->minuty) - (inna.minuty + (inna.godziny*60));
    int godz = roznica / 60;
    int mins = roznica % 60;
    Ttime Troznica(godz,mins);
    return Troznica;
}
Ttime Ttime::operator+ (Ttime inna)
{
    int suma = ((this->godziny *60) + this->minuty) + (inna.minuty + (inna.godziny*60));
    int godz = suma / 60;
    int mins = suma % 60;
    Ttime Tsuma(godz,mins);
    return Tsuma;
}
Ttime Ttime::operator*(int nn)
{
    int mins =  godziny*60 + minuty;
    mins *= nn;
    int godz = mins / 60;
    int tempMins = mins % 60;

    Ttime newTime(godz,tempMins);
    return newTime;
}
