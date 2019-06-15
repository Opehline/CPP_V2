// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include <iostream>

#include "Lagerinitialisierung.hpp"
#include "Begruessungsfunktionen.hpp"

using namespace std;

int main()
{
    #if 0
    Lagern startlager;
    Begruessungsfunktionen hilfsvariable(startlager);
    #else
    Begruessungsfunktionen hilfsvariable; //Keine Klammern, weil keine Parameter
    // Lager erst in später setzen/ laden
    #endif // 1
    hilfsvariable.startBetrieb();


    return 0;
}
