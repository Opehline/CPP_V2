// Tanja Treffler
//   Projekt für C++ Basiskurs
//   Schreinerei vereinfacht abbilden

#include <iostream>

class HerstellungVerkauf{

    // Attribute privat



    // Methoden
    public:
        // Wie viele Tische können derzeit maximal hergestellt werden?
        int baubaretische();


};

// Lager aufstocken, um Kundenwunsch zu erfüllen
void materialnachkauf(int tisch);

int baubaretische();
void tischbau(int tisch);         // Macht aus Material Tische
void verkauf(int tisch);          // Verkauf
