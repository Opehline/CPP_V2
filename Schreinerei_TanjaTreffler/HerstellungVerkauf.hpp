// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include <iostream>

#include "Begruessungsfunktionen.hpp"
#include "Lagerinitialisierung.hpp"

class HerstellungVerkauf{

// Attribute
private:
    int anzahltische; // vom Kunden bestellte Tische
    Begruessungsfunktionen betrieb;
    Lagern* p_myLager;
    // Funktionsinterne Parameter
    int bedarf_n;
    int bedarf_b;
    int tische_n;
    int tische_b;
    int baubar;
    int naegel_test;
    int bretter_test;
    float geld_test;


// Konstruktoren, Destruktor
public:
    HerstellungVerkauf(int tische);
    HerstellungVerkauf(int tische, Begruessungsfunktionen betrieb);
    HerstellungVerkauf(int tische, Lagern* p_myLager);
    virtual ~HerstellungVerkauf();
/* Get-set-Methoden */
    int getTische();
    void setTische(int tische);
    Begruessungsfunktionen getBetrieb();
    void setBetrieb(Begruessungsfunktionen betrieb);
    Lagern* getLager();
    void setLager(Lagern* p_Lager);

/* Weitere Methoden */
public:
    // Lager aufstocken, um Kundenwunsch zu erfüllen
    void materialnachkauf();
    // Wie viele Tische können derzeit maximal hergestellt werden?
    int baubaretische();
    void tischbau();         // Macht aus Material Tische
    void verkauf();          // Verkauf

};


