#ifndef TINSTRUMENT_H
#define TINSTRUMENT_H
#include <string>
using namespace std;

class TInstrument
{
public:
    TInstrument();
    TInstrument(string n);
    virtual ~TInstrument();
   // string dzwiek(); //wczesne wiazanie metod na etapie kompilacji
    virtual string dzwiek(); // pozne wiazanie metod na etapie wykonania - polimorfizm
    void muzyka(int n);
protected:
    string nazwa;

private:

};

#endif // TINSTRUMENT_H
