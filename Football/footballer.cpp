#include "footballer.h"
#include <string>
Footballer::Footballer()
{
firstname = "Dawid";
lastname="Plewik";
}
Footballer::Footballer(string firstname,string lastname)
{
    this->firstname = firstname;
    this->lastname = lastname;

}
Footballer::Footballer(string firstname,string lastname,string pos,int number)
{
    this->firstname = firstname;
    this->lastname = lastname;
    this->position=pos;
    this->number = number;
}
string Footballer::text()
{


   string nr= to_string(number);
    return firstname + " " + lastname + "     " + nr + "      " + position ;

}
