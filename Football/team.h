#ifndef TEAM_H
#define TEAM_H
#include <QList>
#include <iostream>
#include "footballer.h"

using namespace std;

class Team
{
public:
    Team();
    Team(string name);
    static int counter;
    void setName(string name);
    string text();
    string getName();
    void addFootballer(Footballer &footballer);
    void deleteFootballers();
   void remove();
protected:
    string name;
    int id;
    int footballerCounter;
    QList<Footballer> footballers;

};

#endif // TEAM_H
