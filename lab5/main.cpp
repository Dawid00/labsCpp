#include <iostream>
#include "Tosoba.h"
#include "TStudent.h"
#include "Tpracownik.h"
#include "TpracownikFizyczny.h"
#include "TpracownikUmyslowy.h"
using namespace std;

int main()
{


    //TEST1
    cout<<"TEST KLASY OSOBA"<<endl;
    Tosoba osoba1;
    Tosoba osoba2("Milosz","Truk");
    Tosoba osoba3;
    osoba3.wczytaj();
    osoba1.wyswietl();
    cout<<endl;
    osoba2.wyswietl();
    cout<<endl;
    osoba3.wyswietl();
    cout<<endl;
    cout<<"TEST KLASY STUDENT"<<endl;
    //TEST 2
    Tstudent student1;
    Tstudent student2("Kamil","Nowak","SGH",4);
    Tstudent student3;
    student3.wczytaj();
    student1.wyswietl();
    cout<<endl;
    student2.wyswietl();
    cout<<endl;
    student3.wyswietl();
    cout<<endl;
    student2.Tosoba::wyswietl();
    cout<<endl;
    //TEST3
    cout<<"TEST KLASY PRACOWNIK"<<endl;
    Tpracownik pracownik1;
    Tpracownik pracownik2 = pracownik1;
    Tpracownik pracownik3("Kamil","Slimak","Naleczowianka",0);
    Tpracownik pracownik4;
    pracownik4.wczytaj();

    pracownik1.wyswietl();
    cout<<endl;
    pracownik2.wyswietl();
    cout<<endl;
    pracownik3.wyswietl();
    cout<<endl;
    pracownik4.wyswietl();
    cout<<endl;

    cout<<"TEST KLASY PRACOWNIK FIZYCZNY"<<endl;
    TpracownikFizyczny pracownikF1;
    TpracownikFizyczny pracownikF2("Mariusz","Pudzianowski","ETRAPEZ",5,160,15.5);
    TpracownikFizyczny pracownikF3;
    pracownikF3.wczytaj();

    pracownikF1.wyswietl();
    cout<<endl;
    pracownikF2.wyswietl();
    cout<<endl;
    pracownikF3.wyswietl();
    cout<<endl;


  cout<<"TEST KLASY PRACOWNIK UMYSLOWY"<<endl;
    TpracownikUmyslowy pracownikU1;
    TpracownikUmyslowy pracownikU2("Albert","Pompka","Bistro u puni",0,3540);
    TpracownikUmyslowy pracownikU3;
    pracownikU3.wczytaj();
    pracownikU1.wyswietl();
    cout<<endl;
    pracownikU2.wyswietl();
    cout<<endl;
    pracownikU3.wyswietl();
    cout<<endl;


    return 0;
}
