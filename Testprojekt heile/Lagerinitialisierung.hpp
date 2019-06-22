// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include <iostream>
#include <map>            // std::map
#include <iterator>
#include <string>
#include <fstream>        // ifstream, ofstream


#ifndef Lager_C_H
#define Lager_C_H
class Lagern{

// Konstruktoren
public:
    Lagern();
    Lagern(int NAGELKAUFEINHEIT, int BRETTKAUFEINHEIT,
           std::map<std::string, float> preise);
    // Struct
    struct Inventar{
        int naegel;
        int bretter;
        int tische;
        float geld;
    };
    Inventar meinInventar;
// Attribute
private: /* globale Konstanten: priavte, weil nicht änderbar*/
    // Lagerbestand deklarienen

    int NAGELKAUFEINHEIT;
    int BRETTKAUFEINHEIT;
    int nagelJeTisch;
    int brettJeTisch;
    std::map<std::string, float> preise;/* Preisliste */

// Get-Methoden
public:
    int getNagelkaufeinheit();
    int getBrettkaufeinheit();
    std::map<std::string, float> getPreise();

// Weitere Methode
    void loadLagerstart();  // Anfangsbestand für das Lager
};
#endif // Lager_C_H




