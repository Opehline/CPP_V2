// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include <iostream>
#include <map>            // std::map
#include <iterator>
#include <string>

#ifndef Lager_C_H
#define Lager_C_H
class Lagern{

// Konstruktoren
public:
    Lagern();
    Lagern(int NAGELKAUFEINHEIT, int BRETTKAUFEINHEIT, int nagelJeTisch,
           int brettJeTisch, std::map<std::string, float> preise);

// Attribute
private: /* globale Konstanten: priavte, weil nicht änderbar*/
    int NAGELKAUFEINHEIT;
    int BRETTKAUFEINHEIT;
    int nagelJeTisch;
    int brettJeTisch;
    std::map<std::string, float> preise;/* Preisliste */

// Get-Methoden
public:
    int getNagelkaufeinheit();
    int getBrettkaufeinheit();
    int getNagelJeTisch();
    int getBrettJeTisch();
    std::map<std::string, float> getPreise();

// Weitere Methode
    void loadLagerstart();  // Anfangsbestand für das Lager
};
#endif // Lager_C_H


// Lagerbestand deklarienen
#ifndef Lagerstruct_H
#define Lagerstruct_H
struct Lager{
    int naegel;
    int bretter;
    int tische;
    float geld;
};
extern struct Lager meinLager;
#endif // Lagerstruct_H


