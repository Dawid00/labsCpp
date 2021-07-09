#ifndef TSASIAD_H
#define TSASIAD_H
#include <iostream>
#include "Tdomownik.h"
using namespace std;

class Tsasiad
{
    public:
        Tsasiad();
        Tsasiad(string naz);
        virtual ~Tsasiad();
        void info(Tdomownik &domownik);
    protected:


    private:
          string nazwa;
};

#endif // TSASIAD_H
