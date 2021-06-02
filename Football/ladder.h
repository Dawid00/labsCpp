#ifndef LADDER_H
#define LADDER_H
#include "team.h"
#include <QList>
class Ladder
{
public:
    Ladder();
    QList<Team> teamsLadder;
    void addTeam(Team &team);
};

#endif // LADDER_H
