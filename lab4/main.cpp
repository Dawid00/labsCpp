#include <iostream>
#include <string>
#include "Tdata.h"
#include "Tosoba.h"
#include "TosobaS.h"
using namespace std;

int TosobaS::liczbaObiektow = 0;
int main()
{
//Notes dat urodzin
Tdata data(1,2,3333);


int ile;
cout<<"Ile osob chcesz wpisac do notesu z datami?---> ";
cin>>ile;
Tosoba *notes[ile];
//wczytwanie obiektow do tablicy
for(int i = 0; i < ile; i++)
{
    notes[i] = new Tosoba;
    notes[i] -> wczytaj();

}

for(int i = 0; i < ile; i++)
{
    notes[i]->wyswietl();

}
//usuwanie z pamieci obiektow
for (int i = 0; i < ile;i++){
    delete notes[i];
}

/*
TosobaS dawid;
dawid.podajDane();
dawid.wyswietl();
TosobaS kacper;
kacper.wyswietl();
*/



/*TosobaS dawid;
cout<<TosobaS::ile()<<endl;
TosobaS dawid1;
TosobaS dawid2("Kamil","Wini",22);
TosobaS *wsk = &dawid2;
TosobaS &dawid4 = dawid1;
dawid1.wyswietl();
dawid2.wyswietl();
cout<<TosobaS::ile()<<endl;
*/
/*TosobaS dawid;
cout<<TosobaS::ile()<<endl;
TosobaS dawid1;
TosobaS dawid2("Kamil","Wini",22);
TosobaS *wsk = &dawid2;
TosobaS *dawid4 = new TosobaS;
dawid1.wyswietl();
dawid2.wyswietl();
cout<<TosobaS::ile()<<endl;
*/

/*
Tosoba dawid;
dawid.wczytaj();

dawid.wyswietl();
Tosoba osoba2;
Tosoba osobaDluzszeNazwisko;
osoba2.wyswietl();
cout<<dawid.roznicaWieku(osoba2)<<endl;
osobaDluzszeNazwisko = dawid.dluzszeNazwisko(osoba2);
osobaDluzszeNazwisko.wyswietl();


*/
    return 0;
}
