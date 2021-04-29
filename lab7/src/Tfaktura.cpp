#include "../include/Tfaktura.h"
#include "../include/Tdokument.h"
#include <iomanip>
Tfaktura::Tfaktura(string naz, string nr, int r, int m, int d,int pozycje,Tklient* klient):Tdokument(naz,nr,r,m,d)
{

    liczbaPozycji = pozycje;
    listaTowarow = new Ttowar[liczbaPozycji];
    this->klient = klient;
    obliczWartosc();
}
Tfaktura::Tfaktura()
{}
Tfaktura::~Tfaktura()
{
    delete[] listaTowarow;
}
void Tfaktura::wczytaj()
{

    Tdokument::wczytaj();
    wczytajTowary();

}
void Tfaktura::wczytajTowary()
{


    cout<<endl<<"Wczytwanie towarow do faktury"<<endl;
    cout<<"Podaj liczbe pozycji:";
    cin>>liczbaPozycji;
    delete[] listaTowarow;
    listaTowarow = new Ttowar[liczbaPozycji];
    for(int i = 0; i < liczbaPozycji; i++)
    {
        listaTowarow[i].wczytaj();
    }
    obliczWartosc();

}
void Tfaktura::obliczWartosc()
{
    wartosc = 0;
    for(int i = 0; i < liczbaPozycji; i++)
    {
        wartosc += listaTowarow[i].oblicz_wartosc();
    }
}
void Tfaktura::wyswietl()
{
    cout<<setw(28);
    Tdokument::wyswietl();
    klient->wyswietl();
    cout<<setw(3)<<"Lp."<<setw(30)<<"Towar"<<setw(18)<<"Cena"<<setw(15)<<"Ilosc"<<endl;
    for(int i = 0 ; i < 66; i++) cout<<"-";
    cout<<endl;
    for(int i = 0; i <liczbaPozycji; i++)
    {
        cout<<setw(3)<<i +1;
        listaTowarow[i].wyswietl();
    }
    cout<<endl<<setw(34)<<"Razem:"<< wartosc <<" zl"<<endl<<endl<<endl<<endl;
}
