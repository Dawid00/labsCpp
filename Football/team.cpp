#include "team.h"
Team::Team(){}
Team::Team(string name)
{

    this->name = name;
  //  id=counter;
   // counter++;

}
string Team::getName()
{
    return this->name;
}
void Team::setName(string name)
{
    this->name = name;
}
void Team::addFootballer(Footballer &footballer)
{

    footballers.append(footballer);
}
void Team::deleteFootballers()
{
    footballers.clear();
}
void Team::remove()
{
    footballers.removeLast();
}
string Team::text()
{
    string nr= to_string(id);
   //  return nr + " " +  name ;
return " " + name ;

}
