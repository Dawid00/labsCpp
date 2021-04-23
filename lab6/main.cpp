#include <iostream>
#include "TSkrzypce.h"
#include "TInstrument.h"
#include "TTrabka.h"
#include "Tfigura.h"
#include "Tkolo.h"
#include "Tkwadrat.h"
#include "Tprostokat.h"
using namespace std;

int main()
{

    /*
        TInstrument instrument;
        TTrabka trabka;
        TSkrzypce skrzypce;
        instrument.muzyka(1);
        trabka.muzyka(1);
        skrzypce.muzyka(1);
       */


    Tfigura figura;
    Tkolo kolo;
    Tkwadrat kwadrat("Kwadrat o boku rownym 12", 12);
    Tprostokat prostokat;
    figura.wyswietl();
    cout<<endl;
    kolo.wyswietl();
    cout<<endl;
    kwadrat.wyswietl();
    cout<<endl;
    prostokat.wyswietl();


    return 0;
}
