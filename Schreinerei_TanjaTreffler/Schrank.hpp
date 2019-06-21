// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include "Moebelstueck.hpp"


#ifndef SCHRANK_H
#define SCHRANK_H
class Schrank : public Moebelstueck{
    /* Geerbt:
protected:
    float preis;
    //Zusammensetzung
    int bretter;
    int naegel;*/

private:
    int schrauben;

public:
    /* Konstruktor */
    Schrank();
    // get Materialien
    float getPreis() override;
    int getBretter();
    int getNaegel();
    int getSchrauben();
};
#endif // SCHRANK_H
