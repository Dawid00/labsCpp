#include "Ttrojkat.h"
#include <math.h>
Ttrojkat::Ttrojkat()
{
    bokA = 3;
    bokB = 4;
    bokC = 5;
    h=4;

}

Ttrojkat::~Ttrojkat()
{
}
float Ttrojkat::obliczPole(int a, int b, int c )
{
    float p = (a + b + c)/2;
    float pole = sqrt(p*(p-a)*(p-b)*(p-c));
    return pole;
}
float Ttrojkat::obliczPole(int podstawa, int wysokosc)
{
    float pole = (podstawa*wysokosc) / 2.0;
    return pole;
}
float Ttrojkat::obliczPole()
{
    float p = (bokA + bokB + bokC)/2;
    float pole = sqrt(p*(p-bokA)*(p-bokB)*(p-bokC));
    return pole;
}
