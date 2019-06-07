// Tanja Treffler
//   Projekt f�r C++ Basiskurs
//   Schreinerei vereinfacht abbilden

#include <iostream>
#include <map>            // std::map
#include <iterator>
#include <string>

/* globale Variablen*/
extern int NAGELKAUFEINHEIT;
extern int BRETTKAUFEINHEIT;
extern int nagelJeTisch;
extern int brettJeTisch;

// Lagerbestand deklarienen
struct Lager{
    int naegel;
    int bretter;
    int tische;
    float geld;
};
extern struct Lager meinLager;

/* Preisliste */
extern std::map<std::string, float> preise;

void loadLagerstart();                    // Anfangsbestand f�r das Lager
