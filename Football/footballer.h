#ifndef FOOTBALLER_H
#define FOOTBALLER_H
#include <iostream>

using namespace std;
enum Pozycja { BRAMKARZ,OBRONCA,POMOCNIK,NAPASTNIK };
class Footballer
{
public:
    Footballer();
    Footballer(string firstname,string lastname);
    Footballer(string firstname,string lastname,string pos,int number);
    string text();

protected:
    string firstname;
    string lastname;
    string position;
    int number;

};

#endif // FOOTBALLER_H
