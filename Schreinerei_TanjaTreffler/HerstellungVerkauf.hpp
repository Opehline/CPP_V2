// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include <iostream>

#include "Begruessungsfunktionen.hpp"

class HerstellungVerkauf{

// Attribute
private:
    int anzahltische; // vom Kunden bestellte Tische
    Begruessungsfunktionen betrieb;

// Konstruktoren, Destruktor
public:
    HerstellungVerkauf(int tische);
    HerstellungVerkauf(int tische, Begruessungsfunktionen betrieb);
    virtual ~HerstellungVerkauf();
/* Get-set-Methoden */
    int getTische();
    void setTische(int tische);
    Begruessungsfunktionen getBetrieb();
    void setBetrieb(Begruessungsfunktionen betrieb);

/* Weitere Methoden */
public:
    // Lager aufstocken, um Kundenwunsch zu erfüllen
    void materialnachkauf();
    // Wie viele Tische können derzeit maximal hergestellt werden?
    int baubaretische();
    void tischbau();         // Macht aus Material Tische
    void verkauf();          // Verkauf

};


