#ifndef TPROSTOKAT_H
#define TPROSTOKAT_H

#include <Tfigura.h>


class Tprostokat : public Tfigura
{
public:
    Tprostokat();
    Tprostokat(string n,float a, float b);
    virtual ~Tprostokat();
    float pole();
    float obwod();
    void rysuj();
protected:
    float a;
    float b;
private:

};

#endif // TPROSTOKAT_H
