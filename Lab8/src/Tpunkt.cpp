#include "Tpunkt.h"

Tpunkt::Tpunkt()
{
   x=1;
   y=1;
}

Tpunkt::Tpunkt(float xx , float yy)
{
   x=xx;
   y=yy;
}

Tpunkt::~Tpunkt()
{
    //dtor
}

void Tpunkt::ruch(float xx,float yy)
{
x+=xx;
y+=yy;
}
float Tpunkt::getX()
{
    return x;
}
float Tpunkt::getY()
{
    return y;
}
