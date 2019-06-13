// Tanja Treffler
//   Projekt f�r C++ Basiskurs
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
    // Lager aufstocken, um Kundenwunsch zu erf�llen
    void materialnachkauf();
    // Wie viele Tische k�nnen derzeit maximal hergestellt werden?
    int baubaretische();
    void tischbau();         // Macht aus Material Tische
    void verkauf();          // Verkauf

};


