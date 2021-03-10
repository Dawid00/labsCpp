#include <iostream>
#include <cstdlib>
#include <math.h>
#include "TEmployee.h"
#include "Tstudent.h"
using namespace std;

class Tdzialania
{
private:
    int a, b;
public:
    void podajDane();
    int suma();
    int roznica();
    float iloraz();
    int iloczyn();
    int potegowanie();

};


void Tdzialania::podajDane()
{
    cout<<"podaj dwie liczby calkowite ";
    cin>>a>>b;
}
int Tdzialania::suma()
{
    return a+b;
}

int Tdzialania::roznica()
{
    return a-b;
}
float Tdzialania::iloraz()
{
    if (b!=0)
        return (float)a / (float)b ;
    else
    {
        cout<<"Nie mozna dzielic przez 0. Wczytaj liczby ponownie!"<<endl;
        podajDane();
        return (float)a / (float)b;
    }
}
int Tdzialania::iloczyn()
{
    return a * b ;
}
int Tdzialania::potegowanie()
{
    return pow(a,b);
}




int main()
{
//zad2.3
    /*
    TEmployee employee;
    employee.loadEmployee();
    employee.showEmployee();

    TEmployee employee2;
    employee2.loadEmployee();
    employee2.showEmployee();

    */

//zad 2.1
    /*
    cout << "Hello world!" << endl;
    Tdzialania dzialania;
    dzialania.podajDane();
    cout << dzialania.iloraz() << endl;
     */

//zad 2.4

    Tstudent student;
    student.wczytajStudenta();
    student.wyswietlStudenta();
    system("PAUSE");
    return 1;

}


