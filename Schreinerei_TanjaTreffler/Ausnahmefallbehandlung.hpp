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
        /* geht nicht: Fehlermeldung
        a) Attrribut einkommentieren, include hpp in cpp -> does not Name a typ
        b) include hpp hier -> nested too deeply
        //Begruessungsfunktionen einBetrieb;
        */

        Ausnahmefallbehandlung();
        virtual ~Ausnahmefallbehandlung();
        // Funktion, wo Fehler auftreten k�nnte
        int testeingabe();
        int test_bestellungsaufnahme(int e, int tische);
        void test_bestellungsaufnahme(int e);

    protected:

    private:

};

#endif // AUSNAHMEFALLBEHANDLUNG_H
