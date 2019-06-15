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
    /* Zusammensetzumg */
    nagelJeTisch = 27;
    brettJeTisch = 18;

    preise = {
    {"nagel", 0.05},
    {"brett", 1.00},
    {"tisch", 62.00}
    };
};
Lagern::Lagern(int _NAGELKAUFEINHEIT, int _BRETTKAUFEINHEIT, int _nagelJeTisch,
           int _brettJeTisch, std::map<std::string, float> _preise){
    /* Einkaufsgrößen */
    NAGELKAUFEINHEIT = _NAGELKAUFEINHEIT;
    BRETTKAUFEINHEIT = _BRETTKAUFEINHEIT;
    /* Zusammensetzumg */
    nagelJeTisch = _nagelJeTisch;
    brettJeTisch = _brettJeTisch;
    preise       = _preise;
};

/* Get-Methoden */
int Lagern::getNagelkaufeineheit(){
    return NAGELKAUFEINHEIT;
}
int Lagern::getBrettkaufeinheit(){
    return BRETTKAUFEINHEIT;
}
int Lagern::getNagelJeTisch(){
    return nagelJeTisch;
}
int Lagern::getBrettJeTisch(){
    return brettJeTisch;
}
std::map<std::string, float> Lagern::getPreise(){
    return preise;
}
#endif // preise_H

/* Anfangsbestand für das Lager*/
void Lagern::loadLagerstart(){
    // Nagel, Brett, Tisch, Geld
    meinLager = {300, 50, 0, 200};
};

#ifndef Lager_H
#define Lager_H
struct Lager meinLager;
#endif // Lager_H
