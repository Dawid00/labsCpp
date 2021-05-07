#include "Bryla.h"
#include <iostream>
using namespace std;

Bryla::Bryla() //konstruktor domyslny
{
    nazwa="";
    kolor="";
}
Bryla::Bryla(string naz, string kol) //konstruktor  z parametrami
{
    nazwa = naz;
    kolor=kol;
}
Bryla::~Bryla()
{
    //dtor
}
float Bryla::obliczPolePodstawy()
{
    return 0;

}
float Bryla::obliczObjetosc()
{
    return 0;

}
void Bryla::info()
{
    cout<<"Nazwa figury: "<< nazwa <<endl;
    cout<<"Kolor: " << kolor<<endl;
    cout<<"Pole podstawy: "<<obliczPolePodstawy()<<endl;
    cout<<"Objetosc: "<<obliczObjetosc()<<endl;
}
