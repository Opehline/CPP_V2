// Tanja Treffler
//   Projekt f�r C++ Aufbaukurs
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
        // Funktion, wo Fehler auftreten k�nnte
        int testeingabe();

    protected:

    private:

};

#endif // AUSNAHMEFALLBEHANDLUNG_H
