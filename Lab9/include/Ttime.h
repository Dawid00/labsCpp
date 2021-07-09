#ifndef TTIME_H
#define TTIME_H
#include<iostream>
using namespace std;

class Ttime
{
public:
    Ttime(int godz=0,int m=0);
    virtual ~Ttime();
    Ttime operator+ (Ttime inna);
    Ttime operator-(Ttime inna);
    Ttime operator*(int nn);
    const int getGodziny();
    const int getMinuty();
    friend ostream & operator<< (ostream & os, const Ttime &t);
protected:

private:
    int godziny;
    int minuty;
};

#endif // TTIME_H
