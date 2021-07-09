#ifndef TKOLO_H
#define TKOLO_H
#include "Tpunkt.h"
class Tpunkt;
class Tkolo
{
    public:

        Tkolo();
        Tkolo(float rr);

        friend bool nalezy(Tkolo &kolo, Tpunkt &pkt);
        virtual ~Tkolo();
        float getR();
    protected:

    private:
        float r;
};

#endif // TKOLO_H
