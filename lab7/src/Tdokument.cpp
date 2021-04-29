#include "../include/Tdokument.h"
Tdokument::Tdokument()
{
    nazwa = "Dokument";
    numerDokumentu = "0";
    data.rok=2021;
    data.dzien=4;
    data.miesiac=28;
}
Tdokument::Tdokument(string naz, string nr, int r, int m, int d)
{
    nazwa = naz;
    numerDokumentu=nr;
    data.rok = r;
    data.miesiac = m;
    data.dzien = d;
}
void Tdokument::wczytaj()
{
    cout<<endl<<"Wczytywanie dokumentu!"<<endl;
    cout<<"Podaj nazwe dokumentu: ";
    cin>>nazwa;
    cout<<"Podaj numer dokumentu:";
    cin>>numerDokumentu;
    wczytajDate();
}
void Tdokument::wczytajDate()
{
    cout<<"Podaj rok:";
    cin>>data.rok;
    cout<<"Podaj miesiac:";
    cin>>data.miesiac;
    cout<<"Podaj dzien:";
    cin>>data.dzien;
}
void Tdokument::wyswietl()
{
    cout<<nazwa<<"\t"<<numerDokumentu<<"\t";
    cout<<data.dzien<<"-"<<data.miesiac<<"-"<<data.rok<<endl;
}
Tdokument::~Tdokument()
{}
