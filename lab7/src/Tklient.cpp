#include "../include/Tklient.h"
Tklient::Tklient()
{
    imie = "Adam";
    nazwisko="Kowalski";
    nip="717-31-74";
}
Tklient::Tklient(string im, string naz,string anip)
{
    imie = im;
    nazwisko= naz;
    nip=anip;
}
void Tklient::wczytaj()
{
    cout<<"Wczytywanie klienta!"<<endl;
    cout<<"Podaj imie:";
    cin>>imie;
    cout<<"Podaj nazwisko:";
    cin>>nazwisko;
    cout<<"Podaj nip:";
    cin>>nip;

}
void Tklient::wyswietl()
{
    cout<<"KLIENT:"<<endl;
    cout<<imie<<" "<<nazwisko<<endl<<"NIP:"<<nip<<endl<<endl;
}




Tklient::~Tklient()
{
    //dtor
}
