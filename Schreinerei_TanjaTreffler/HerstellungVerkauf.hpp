// Tanja Treffler
//   Projekt f�r C++ Basiskurs
//   Schreinerei vereinfacht abbilden

#include <iostream>

class HerstellungVerkauf{

    // Attribute privat



    // Methoden
    public:
        // Wie viele Tische k�nnen derzeit maximal hergestellt werden?
        int baubaretische();


};

// Lager aufstocken, um Kundenwunsch zu erf�llen
void materialnachkauf(int tisch);

int baubaretische();
void tischbau(int tisch);         // Macht aus Material Tische
void verkauf(int tisch);          // Verkauf
