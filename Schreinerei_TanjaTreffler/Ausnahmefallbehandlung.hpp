// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden

#include <iostream>

//#include "Begruessungsfunktionen.hpp"

#ifndef AUSNAHMEFALLBEHANDLUNG_H
#define AUSNAHMEFALLBEHANDLUNG_H

class Ausnahmefallbehandlung
{
    public:
        // Attribut
        //Begruessungsfunktionen einBetrieb;

        Ausnahmefallbehandlung();
        virtual ~Ausnahmefallbehandlung();
        // Funktion, wo Fehler auftreten könnte
        int testeingabe();

    protected:

    private:

};

#endif // AUSNAHMEFALLBEHANDLUNG_H
