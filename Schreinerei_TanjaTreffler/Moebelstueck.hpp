// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include <iostream>

class Moebelstueck{

protected:
    float preis;
    //Zusammensetzung
    int bretter;
    int naegel;

public:
    // Konstruktor -> nicht, weil hier nichts initiiert wird
    // virtuelle Mehtode
    virtual float getPreis() = 0;

};
