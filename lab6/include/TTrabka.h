#ifndef TTRABKA_H
#define TTRABKA_H

#include <TInstrument.h>


class TTrabka : public TInstrument
{
public:
    TTrabka();
    TTrabka(string n);
    virtual ~TTrabka();
    string dzwiek();
protected:
    string nazwa;
private:

};

#endif // TTRABKA_H
