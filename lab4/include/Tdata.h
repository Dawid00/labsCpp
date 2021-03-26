#ifndef TDATA_H
#define TDATA_H


class Tdata
{
private:
    int d, m, r;
public:
    Tdata();
    Tdata(int dd, int mm, int rr):d(dd), m(mm), r(rr) {};

    void wczytaj();
    void wyswietl();
    int getR();



};

#endif // TDATA_H
