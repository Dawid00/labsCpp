#include <iostream>
#include "Tdokument.h"
#include "Tklient.h"
#include "Tfaktura.h"
#include "Ttowar.h"
using namespace std;

int main()
{
    Tklient klient1("Kamil","Adamczyk","715-34-59");
    Tklient klient2("Dawid","Kiwelp","123-45-67");

    //klient1.wczytaj();
    //klient2.wczytaj();

    Tfaktura faktura1("Faktura","2021/1", 2021, 4, 25,1,&klient1);
    Tfaktura faktura2("Faktura","2021/2", 2021, 4, 26, 2,&klient2);
    Tfaktura faktura3("Faktura","2021/3", 2021, 4, 28, 3,&klient2);


    faktura1.wczytaj();
    faktura2.wczytajTowary();
    faktura3.wczytajTowary();

    faktura1.wyswietl();
    faktura2.wyswietl();
    faktura3.wyswietl();



    return 0;

}
