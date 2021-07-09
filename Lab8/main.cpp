#include <iostream>
#include "Tdomownik.h"
#include "Tsasiad.h"
#include "Tpunkt.h"
#include "Tkolo.h"
using namespace std;
string sasiad(Tdomownik &domownik);
bool nalezy(Tkolo &kolo, Tpunkt &pkt);

bool sprawdz(Tkolo &kolo, Tpunkt &pkt);
int main()
{
/*
    cout << "zad 8.1" << endl;


Tdomownik ojciec("Ryszard","Gram w pokera");

Tdomownik matka("Anna","Nie dodaje soli do zupy");
Tdomownik corka("Joanna","Chodze pozno spac");
Tsasiad sasiadRoman;
sasiadRoman.info(ojciec);
cout << sasiad(ojciec)<<endl;
sasiadRoman.info(matka);
corka.setKod(3333);
sasiadRoman.info(corka);
*/

///*

cout << "zad 8.2" << endl;

Tpunkt pkt(3,1);
Tkolo kolo(3);
cout<<pkt.getX()<<" "<<pkt.getY()<<endl;
cout<<"Sprawdz:"<< sprawdz(kolo, pkt)<<endl;
cout<<"Nalezy:"<<nalezy(kolo,pkt)<<endl;
pkt.ruch(2,-9);
cout<<pkt.getX()<<" "<<pkt.getY()<<endl;
cout<<"Sprawdz:"<< sprawdz(kolo, pkt)<<endl;
cout<<"Nalezy:"<<nalezy(kolo,pkt)<<endl;

///*
    return 0;
}

string sasiad(Tdomownik &domownik)
{
    domownik.kod=7777;
    return domownik.sekret;
}

bool nalezy(Tkolo &kolo, Tpunkt &pkt)
{

    if(pkt.x <= kolo.r && pkt.y <= kolo.r) return true;
    else return false;
}

bool sprawdz(Tkolo &kolo, Tpunkt &pkt)
{
    if(pkt.getX() <= kolo.getR() && pkt.getY() <= kolo.getR()) return true;
    else return false;
}
