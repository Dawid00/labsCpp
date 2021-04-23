#include "TSkrzypce.h"

TSkrzypce::TSkrzypce()
{
   nazwa="skrzypce";
}
TSkrzypce::TSkrzypce(string n)
{
   nazwa=n;
}

TSkrzypce::~TSkrzypce()
{
    //dtor
}

string TSkrzypce::dzwiek()
{

    return "pipiipip";
}
