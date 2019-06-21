// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include "Tisch.hpp"


/* Konstruktor */
Tisch::Tisch(){

    preis = 62.00;
    //Zusammensetzung
    bretter = 18;
    naegel = 27;
}


float Tisch::getPreis() {
    return preis;
};
int Tisch::getBretter(){
    return bretter;
}
int Tisch::getNaegel(){
    return naegel;
}



