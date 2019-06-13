#include <iostream>
#include <typeinfo>
#include "Helden.hpp"


Held::Held()
{
    lebenskraft = 50;
    typWaffe = "Keine";
    power = 80;
    name="";
}

void Held::setAll(short int _lebenskraft, std::string _typWaffe, float _power, std::string _name)
{
    lebenskraft = _lebenskraft;
    typWaffe = _typWaffe;
    power = _power;
    name = _name;
}
short int Held::getLebenskraft()
{ return lebenskraft; }
std::string Held::getTypWaffe()
{ return typWaffe;}
float Held::getPower()
{ return power; }
std::string Held::getName()
{ return name; }


Ritter::Ritter()
{
    kampfart = "Noch keins erlernt.";
}
void Ritter::setRitter(std::string _kampfart)
{
    kampfart = _kampfart;
}
std::string Ritter::getRitter()
{  return kampfart; }


Zauberer::Zauberer()
{
    magieart = "Blitz";
}
void Zauberer::setZauberer(std::string _magieart)
{ 
    magieart = _magieart;
}
std::string Zauberer::getZauberer()
{ return magieart; }

Fee::Fee()
{
    magieartAlternativ = "Hypnose";   
}


void Fee::setFee(std::string _magieartAlternativ)
{
    magieartAlternativ = _magieartAlternativ;    
}
std::string Fee::getFee()
{ return magieartAlternativ;}






