// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include "Lagerinitialisierung.hpp"

#ifndef preise_H
#define preise_H
// Konstruktor
Lagern::Lagern(){
    /* Einkaufsgrößen */
    NAGELKAUFEINHEIT = 500;
    BRETTKAUFEINHEIT = 100;

    // Materialpreise
    preise = {
    {"nagel", 0.05},
    {"brett", 1.00},
    };

    meinInventar = {300, 50, 0, 200}; // Nagel, Brett, Tisch, Geld
};
Lagern::Lagern(int _NAGELKAUFEINHEIT, int _BRETTKAUFEINHEIT,
               std::map<std::string, float> _preise){
    /* Einkaufsgrößen */
    NAGELKAUFEINHEIT = _NAGELKAUFEINHEIT;
    BRETTKAUFEINHEIT = _BRETTKAUFEINHEIT;
    preise       = _preise;
};

/* Get-Methoden */
int Lagern::getNagelkaufeinheit(){
    return NAGELKAUFEINHEIT;
}
int Lagern::getBrettkaufeinheit(){
    return BRETTKAUFEINHEIT;
}
std::map<std::string, float> Lagern::getPreise(){
    return preise;
}
#endif // preise_H

/* Anfangsbestand für das Lager*/
void Lagern::loadLagerstart(){
    // Nagel, Brett, Tisch, Geld
    meinInventar = {300, 50, 0, 200};
};

