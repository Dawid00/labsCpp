#ifndef TEMPLOYEE_H
#define TEMPLOYEE_H
#include <string>
using namespace std;


struct data
{
    int year;
    int month;
    int day;
};


class TEmployee
{
private:
    string name;
    string lastname;
    int hours;
    float payRate;
    data hireDate;
    float salary();
    public:
    TEmployee();
    void loadEmployee();

    void showEmployee();
};

#endif // TEMPLOYEE_H
