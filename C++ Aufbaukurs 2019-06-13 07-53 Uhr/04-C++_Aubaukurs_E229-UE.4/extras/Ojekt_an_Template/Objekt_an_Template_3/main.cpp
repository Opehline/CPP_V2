// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 0x.0x.03 der C/C++ Programmierung
// * Class + template-Funktion
// * Wie einen konsistenten return-Wert eines Objekts erstellen,
// * wenn in Laufzeit der return-Wert des Objekt erst ermittelt
// * werden kann

#include <iostream>

#include "Helden.hpp"
#include "Kampf.hpp"
#include "Ausgabe.hpp"

int main(int argc, char **argv)
{
    Sieger figur01;
	Ausgabe ausgabe;

    // * Auf diesem Bereich kann in der Laufzeit agiert werden.
    figur01.typ = figur01.einKampf.werHatDenHeldenhaftenKampfGewonnen();
    figur01.resultatKampf(figur01);

return 0;
}




