#ifndef TKOLO_H
#define TKOLO_H
#include "Tfigura.h"

class Tkolo : public Tfigura
{
public:
    Tkolo();
    Tkolo(string n, float r);
    virtual ~Tkolo();
    float pole();
    float obwod();
    void rysuj();
protected:
    float promien;
private:


};

#endif // TKOLO_H
