// Tanja Treffler
//   Projekt für C++ Basiskurs
//   Schreinerei vereinfacht abbilden

#include <iostream>

class HerstellungVerkauf{

// Konstruktor
public:
    HerstellungVerkauf(int tische);
// Get-Tische
    int getTische();

// Attribute
private:
    int anzahltische;


// Methoden
public:
    // Lager aufstocken, um Kundenwunsch zu erfüllen
    void materialnachkauf(int tisch);
    // Wie viele Tische können derzeit maximal hergestellt werden?
    int baubaretische();
    void tischbau(int tisch);         // Macht aus Material Tische
    void verkauf(int tisch);          // Verkauf

};


