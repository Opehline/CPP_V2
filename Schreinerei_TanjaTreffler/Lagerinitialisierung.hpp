// Tanja Treffler
//   Projekt für C++ Basiskurs
//   Schreinerei vereinfacht abbilden

#include <iostream>
#include <map>            // std::map
#include <iterator>
#include <string>

class Lagern{

// Konstruktoren
public:
    Lagern();
    Lagern(int NAGELKAUFEINHEIT, int BRETTKAUFEINHEIT, int nagelJeTisch,
           int brettJeTisch);

// Attribute
public: /* globale Variablen*/ // besser priavte, weil nicht änderbar!
    // erstmal public, bis wieder fehlerfrei compilierbar
    int NAGELKAUFEINHEIT;
    int BRETTKAUFEINHEIT;
    int nagelJeTisch;
    int brettJeTisch;


};


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

void loadLagerstart();                    // Anfangsbestand für das Lager
