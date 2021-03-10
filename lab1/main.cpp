#include <iostream>
#include <cmath>
#include <iomanip>
#define ILE 3
using namespace std;
//using std::cout;
//using std::cin;
//using std::endl;
namespace kolega1{
    char imie[20] = "Patryk";
    int wiek = 18;
}

namespace kolega2{
char imie[20] = "Dawid" ;
    int wiek = 21;

}

using  namespace kolega1;
struct data {

    int dzien;
    int miesiac;
    int rok;

};
struct pracownik {

    char nazwisko[20];
    float stawkaZaGodzine;
    int liczbaGodzin;
    struct data dataZatrudnienia;


};


struct data wczytajDate();
void wczytajPracownik(pracownik* pracownik);
void wyswietlPracownik(pracownik p);
float placa(pracownik p);
//void wyswietlPlace(pracownik p[ILE]);
void wyswietlPlace(pracownik p[], int ile);
int main()
{
/*
   //cout << kolega1::imie <<" "<<kolega1::wiek<< endl;
    cout << imie <<" "<< wiek << endl;
    char nazwisko[20];
    int a;
    float b;
    char c;

   //wersja c jest zakomentowana
   // printf("Podaj znak, liczbe calkowita i nazwisko:");
   // scanf("%c %d %f %s", &c, &a, &b, nazwisko);

   //wersja c++
    cout<<"Podaj znak, liczbe calkowita i nazwisko: ";
    cin>> c >> a >> b >> nazwisko;

   // printf("%2c %5d %10.2f %20s\n", c, a, b, nazwisko);
    cout<< setw(2) << c << setw(5)<< a <<setw(10) << fixed  << setprecision(2) << b << setw(20) << nazwisko << endl;

    float pole = pow(b,2) * M_PI;
    cout<< "Pole = "<<setw(5)<<fixed<<setprecision(2)<< pole <<endl;
    //printf("Pole = %.2f\n", pole);

*/
struct pracownik pracownicy[ILE];
for(int i = 0; i < ILE; i++){
    wczytajPracownik(&pracownicy[i]);


}
//for(int i = 0; i < ILE; i++){
  //  wyswietlPracownik(pracownicy[i]);
    //cout<<"Wyplata: "<<placa(pracownicy[i])<<endl<<endl;

//}
wyswietlPlace(pracownicy, ILE);
    return 0;
}

void wczytajPracownik(pracownik* pracownik){


    cout << "Podaj nazwisko: ";
    cin >> pracownik -> nazwisko;
    cout << "Podaj stawke za godzine: ";
    cin>> pracownik -> stawkaZaGodzine;
    cout<< "Podaj liczbe godzin: ";
    cin>> pracownik -> liczbaGodzin;
    pracownik->dataZatrudnienia = wczytajDate();




}
struct data wczytajDate(){

    struct data d1;
    cout << "Podaj date zatrudnienia (dzien miesiac rok): ";
    cin >> d1.dzien >> d1.miesiac >> d1.rok;
    return d1;


};
void wyswietlPracownik(pracownik p){

    cout<<"Pracownik"<<endl;
    cout<<"Nazwisko: "<<p.nazwisko<<endl;
    cout<<"Stawka godzinowa: " << p.stawkaZaGodzine<<" zl" <<endl;
    cout<<"Liczba godzin pracy: " << p.liczbaGodzin<<endl;
    cout<<"Data zatrudnienia: " <<setw(2)<<p.dataZatrudnienia.dzien<<" "<<setw(2) <<p.dataZatrudnienia.miesiac<<" "<<setw(4)<<p.dataZatrudnienia.rok<<endl;

}
float placa(pracownik p){

   float wyplata;

   wyplata = p.liczbaGodzin * p.stawkaZaGodzine;


return wyplata;}
void wyswietlPlace(pracownik p[], int ile){

for(int i = 0; i < ile ;i++){
    cout<<"Pracownik"<<endl;
    cout<<"Nazwisko: "<<p[i].nazwisko<<endl;
    cout<<"Wyplata: "<< placa(p[i])<<endl;
    cout<<endl;
}
}

