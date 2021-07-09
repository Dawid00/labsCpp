#ifndef TPUNKT_H
#define TPUNKT_H
#include "Tkolo.h"
class Tkolo;
class Tpunkt
{
    public:
        Tpunkt();
        Tpunkt(float xx , float yy);
      //  friend bool nalezy(Tkolo &kolo, Tpunkt &pkt);
        friend bool nalezy(Tkolo &kolo, Tpunkt &pkt);
        void ruch(float xx,float yy);
        float getX();
        float getY();
        virtual ~Tpunkt();

    protected:

    private:
        float x,y;

};

#endif // TPUNKT_H
