// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include "Schrank.hpp"

/* Konstruktor */
Schrank::Schrank(){
    preis     = 85.00;
    bretter   = 40;
    naegel    = 35;
    schrauben = 21;
}

// get Materialien
float Schrank::getPreis(){
    return preis;
}
int Schrank::getBretter(){
    return bretter;
}
int Schrank::getNaegel(){
    return naegel;
}
int Schrank::getSchrauben(){
    return schrauben;
}


