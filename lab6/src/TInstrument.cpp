#include "TInstrument.h"
#include <iostream>
using namespace std;
TInstrument::TInstrument()
{
   nazwa="gitara";
}
TInstrument::TInstrument(string n)
{
    nazwa=n;
}

TInstrument::~TInstrument()
{
    //dtor

}
string TInstrument::dzwiek()
{

    return "dldldldl";
}
void TInstrument::muzyka(int n)
{

    for(int i = 0;i < n; i ++)
    {
        cout<<dzwiek()<<endl;
    }

}
