#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;
struct Tstudent
{
    string nazwisko;
    float ocena;

};
void wczytajStudenta(Tstudent* student)
{
    cout<<"Podaj ocene:";
    cin>>student->ocena;
    cout<<"Podaj nazwisko:";
    cin>>student->nazwisko;


}
void drukujStudenta(Tstudent* student)
{
    cout<<"Student:"<<student->nazwisko<<endl;
    cout<<"Ocena:"<<student->ocena<<endl;
}

template<class typ>
class tab
{
private:
    typ t[10];
public:
    void wczytaj()
    {
        for(int i =0 ; i < 10; i++)
        {
            cout<<"wpisz element nr "<<i+1<<endl;
            cin>>t[i];

        }

    }

    void drukuj()
    {
        for(int i = 0; i < 10; i++)
        {
            cout<<"tab["<<i<<"]:"<<t[i]<<endl;
        }
        cout<<endl;

    }
};
vector<int> lotto(int liczbaPol, int liczbaWybranych,vector<int> &wygrane);

int main()
{
        //zad 2
    /*   Tstudent st1;
       wczytajStudenta(&st1);
       drukujStudenta(&st1);

       tab<int> tablica_intow;
       tablica_intow.wczytaj();
       tablica_intow.drukuj();

       tab<float> tablica_rz;
       tablica_rz.wczytaj();
       tablica_rz.drukuj();

       tab<string> panstwa;
       panstwa.wczytaj();
       panstwa.drukuj();

       */
    //zad 3
    srand (unsigned ( std::time(0)));
    vector<int> wygraneLiczby;
    vector<int> kupon = lotto(50,6,wygraneLiczby);


    cout<<"LOTTO"<<endl;
    cout<<"Dzisiejsze liczby:"<<endl;
    for(int i =0 ; i <kupon.size(); i++)
    {
        cout<<wygraneLiczby[i]<<" ";
    }
    cout<<endl;
    cout<<"Twoje liczby:"<<endl;
    for(int i =0 ; i <kupon.size(); i++)
    {
        cout<<kupon[i]<<" ";
    }
    cout<<endl;

    return 0;
}

vector<int> lotto(int liczbaPol, int liczbaWybranych,vector<int> &wygrane)
{
    if(liczbaPol <=0 || liczbaWybranych <= 0)
    {
        cout<< "Niestety Lotto sie nie uda!"<<endl;
    }
    vector<int> liczby;
    vector<int> kupon;
    for(int i =1 ; i < liczbaPol; i++)
    {
        liczby.push_back(i);
    }

    random_shuffle(liczby.begin(),liczby.end());
    for(int i = 0 ; i< liczbaWybranych; i++)
    {
        kupon.push_back(liczby[i]);
    }
    random_shuffle(liczby.begin(),liczby.end());
    for(int i = 0 ; i< liczbaWybranych; i++)
    {
        wygrane.push_back(liczby[i]);
    }
    sort(kupon.begin(),kupon.end());
    sort(wygrane.begin(),wygrane.end());
    return kupon;
}
