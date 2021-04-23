#ifndef TKWADRAT_H
#define TKWADRAT_H
#include "Tprostokat.h"
class Tkwadrat : public Tprostokat
{
public:
    Tkwadrat();
    Tkwadrat(string n, float a);
    virtual ~Tkwadrat();
    void rysuj();

protected:

private:
};

#endif // TKWADRAT_H
