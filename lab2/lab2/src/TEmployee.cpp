#include "TEmployee.h"
#include <iostream>
using namespace std;
TEmployee::TEmployee()
{

}

void TEmployee::loadEmployee()
{

    cout << "Turn a name of Employee:";
    cin >> name;
    cout << "Turn a lastname of Employee:";
    cin >> lastname;
    cout << "Turn a pay rate of Employee:";
    cin >> payRate;
    cout << "Turn working hours of Employee:";
    cin >> hours;
    cout << "Turn a date of hiring this Employee(YYYY M DD) ";
    cin >> hireDate.year >>hireDate.month>>hireDate.day;

}
float TEmployee::salary()
{
return payRate * hours;
}

void TEmployee::showEmployee()
{
cout <<name<<" " << lastname << " " << "has been hired since " << hireDate.day << "-" << hireDate.month <<"-" << hireDate.year <<endl;
cout << "salary: "<<salary() <<" zl" <<endl;
}
