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
}

float Bryla::obliczObjetosc()
{
    float pp = obliczPolePodstawy();
    return (pp * wysokosc);
}
void Bryla::info()
{
    cout<<"Nazwa figury: "<< nazwa <<endl;
    cout<<"Kolor: " << kolor<<endl;
    cout<<"Pole podstawy: "<<obliczPolePodstawy()<<endl;
    cout<<"Objetosc: "<<obliczObjetosc()<<endl;
}
