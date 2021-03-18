#ifndef TTROJKAT_H
#define TTROJKAT_H


class Ttrojkat
{
    public:
        Ttrojkat();
        virtual ~Ttrojkat();

        float obliczPole();
        float obliczPole(int a, int b, int c );
        float obliczPole(int podstawa, int wysokosc);
    protected:

    private:
        int bokA, bokB, bokC,h;
};

#endif // TTROJKAT_H
