#ifndef TSKRZYPCE_H
#define TSKRZYPCE_H

#include <TInstrument.h>


class TSkrzypce : public TInstrument
{
    public:
        TSkrzypce();
        TSkrzypce(string n);
        virtual ~TSkrzypce();
        string dzwiek();
    protected:
        string nazwa;

    private:
};

#endif // TSKRZYPCE_H
