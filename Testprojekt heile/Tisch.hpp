// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include <iostream>

#include"Moebelstueck.hpp"

#ifndef TISCH_H
#define TISCH_H
class Tisch : public Moebelstueck{

/* Geerbt:
protected:
    float preis;
    //Zusammensetzung
    int bretter;
    int naegel;*/

public:


public:
    /* Konstruktor */
    Tisch();
    // get Materialien
    float getPreis() override;
    int getBretter();
    int getNaegel();

};
#endif // TISCH_H

