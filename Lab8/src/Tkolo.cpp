#include "Tkolo.h"

Tkolo::Tkolo()
{
    r=1;
}
 Tkolo::Tkolo(float rr)
 {

     r=rr;
 }
Tkolo::~Tkolo()
{
    //dtor
}

float Tkolo::getR()
{
    return r;
}
