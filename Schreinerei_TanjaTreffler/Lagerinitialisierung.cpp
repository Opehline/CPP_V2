// Tanja Treffler
//   Projekt f�r C++ Basiskurs
//   Schreinerei vereinfacht abbilden

#include "Lagerinitialisierung.hpp"

#ifndef preise_H
#define preise_H
// Konstruktor
Lagern::Lagern(){
    /* Einkaufsgr��en */
    NAGELKAUFEINHEIT = 500;
    BRETTKAUFEINHEIT = 100;
    /* Zusammensetzumg */
    nagelJeTisch = 27;
    brettJeTisch = 18;
};
Lagern::Lagern(int _NAGELKAUFEINHEIT, int _BRETTKAUFEINHEIT, int _nagelJeTisch,
           int _brettJeTisch){
    /* Einkaufsgr��en */
    NAGELKAUFEINHEIT = _NAGELKAUFEINHEIT;
    BRETTKAUFEINHEIT = _BRETTKAUFEINHEIT;
    /* Zusammensetzumg */
    nagelJeTisch = _nagelJeTisch;
    brettJeTisch = _brettJeTisch;
};

 std::map<std::string, float> preise = {
    {"nagel", 0.05},
    {"brett", 1.00},
    {"tisch", 62.00}
};
#endif // preise_H

#ifndef Lager_H
#define Lager_H
struct Lager meinLager;
#endif // Lager_H


/* Anfangsbestand f�r das Lager*/
void loadLagerstart(){
    // Nagel, Brett, Tisch, Geld
    meinLager = {300, 50, 0, 200};
};
