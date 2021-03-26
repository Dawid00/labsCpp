#include "Tdata.h"
#include <iostream>
using namespace std;
Tdata::Tdata()
{

    this -> d = 1;
    this -> m = 1;
    this -> r = 1999;
}


void Tdata::wyswietl()
{
cout<<d<<"."<<m<<"."<<r<<"r"<<endl;

}
void Tdata::wczytaj()
{


cout<<"Podaj dzien:";
cin>>this->d;
cout<<"Podaj miesiac:";
cin>>this->m;
cout<<"Podaj rok:";
cin>>this->r;

}

int Tdata::getR()
{

    return this->r;
}
