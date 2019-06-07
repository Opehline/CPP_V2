// Tanja Treffler
//   Projekt für C++ Basiskurs
//   Schreinerei vereinfacht abbilden

#include "Lagerinitialisierung.hpp"

#ifndef preise_H
#define preise_H
/* Einkaufsgrößen */
int NAGELKAUFEINHEIT = 500;
int BRETTKAUFEINHEIT = 100;
/* Zusammensetzumg */
int nagelJeTisch = 27;
int brettJeTisch = 18;

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


/* Anfangsbestand für das Lager*/
void loadLagerstart(){
     #if 1
     // Nagel, Brett, Tisch, Geld
    meinLager = {300, 50, 0, 200};
    #endif
    #if 0
    naegel  = 300;  // Anzahl Preis:  0.05 Geld
    bretter =  50;  // Anzahl Preis:  1.00 Geld
    geld    = 200;
    tische  =   0;  // Anzahl Preis: 62.00 Geld
    #endif // 0
};
