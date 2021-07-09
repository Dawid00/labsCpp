#include <iostream>
#include "Ttime.h"
using namespace std;
ostream & operator<< (ostream & os, const Ttime &t);
Ttime operator*(int n, Ttime cz);
//Ttime operator*(Ttime cz, int n);
bool operator==(Ttime cz1, Ttime cz2);
int main()
{

   Ttime lot1(5,50); //CHICAGO-PARIS
   Ttime lot2(3,40); //PARIS-WWA
   Ttime oczekiwanie(0,50);
   Ttime suma = lot1+lot2+oczekiwanie;
   cout<<suma<<endl;
  /* Ttime lot12 = 2 *lot1 ;
   Ttime lot22 =  lot2 * 2;
cout<<lot12<<endl;
cout<<lot22<<endl;*/
Ttime lotParyzWarszawaWdwiestrony = lot2*2;
Ttime lotLondynWarszawa(3,40);
Ttime lotLondynWarszawaWdwieStrony = lotLondynWarszawa*2;
if(lot2==lotLondynWarszawa)
{
    cout<<"Czas lotu Londyn-Warszawa jest taki sam jak czas lotu Paryz-Warszawa"<<endl;
}
else
{
cout<<"Czas lotu Londyn-Warszawa nie jest taki sam jak czas lotu Paryz-Warszawa"<<endl;
}
cout<<"Zwiekszono dwukrotnie czas lotu Paryz Warszawa"<<endl;
if((lotParyzWarszawaWdwiestrony*2) == lotLondynWarszawaWdwieStrony)
{
    cout<<"Czas lotu Londyn-Warszawa jest taki sam jak czas lotu Paryz-Warszawa"<<endl;
}
else
{
 cout<<"Czas lotu Londyn-Warszawa nie jest taki sam jak czas lotu Paryz-Warszawa"<<endl;
}


    return 0;
}
ostream & operator<< (ostream & os, const Ttime &t)
{
    os << t.godziny << " godz. " << t.minuty << " min";
    return os;
}

bool operator==(Ttime cz1, Ttime cz2)
{
    return cz1.getGodziny() == cz2.getGodziny() && cz1.getMinuty() == cz2.getMinuty();
}

Ttime operator*(int n, Ttime cz)
{
    int mins=(cz.getGodziny() *60) + cz.getMinuty();
    mins *= n;
    int godz = mins/60;
    int tempMins = mins%60;
    Ttime newTime(godz,tempMins);
    return newTime;
}
/*Ttime operator*( Ttime cz, int n)
{
    int mins=(cz.getGodziny() *60) + cz.getMinuty();
    mins*=n;
    int godz = mins/60;
    int tmins = mins%60;
    Ttime newTime(godz,tmins);
    return newTime;
}*/
