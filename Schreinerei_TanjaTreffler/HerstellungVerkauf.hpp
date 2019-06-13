// Tanja Treffler
//   Projekt für C++ Basiskurs
//   Schreinerei vereinfacht abbilden

#include <iostream>

class HerstellungVerkauf{

// Konstruktor, Destruktor
public:
    HerstellungVerkauf(int tische);
    virtual ~HerstellungVerkauf();
// Get-Tische und set-Tische
    int getTische();
    void setTische(int tische);

// Attribute
private:
    int anzahltische; // vom Kunden bestellte Tische


// Methoden
public:
    // Lager aufstocken, um Kundenwunsch zu erfüllen
    void materialnachkauf();
    // Wie viele Tische können derzeit maximal hergestellt werden?
    int baubaretische();
    void tischbau();         // Macht aus Material Tische
    void verkauf();          // Verkauf

};


