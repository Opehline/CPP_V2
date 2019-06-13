// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 0x.0x.01 der C/C++ Programmierung
// * Class + template-Funktion
// * Wie einen konsistenten return-Wert eines Objekts erstellen,
// * wenn in Laufzeit der return-Wert des Objekt erst ermittelt
// * werden kann

#include <iostream>
#include <typeinfo>
#include "Helden.hpp"
#include "Kampf.hpp"

int main(int argc, char **argv)
{
    Sieger figur01;

	std::cout << "Lebenskfraft von Ritter am Anfang des Spieles >" << figur01.einKampf.ritter1.getLebenskraft() << std::endl;
	std::cout << "Lebenskfraft von Zauberer am Anfang des Spieles >" << figur01.einKampf.zauberer1.getLebenskraft() << std::endl;
	std::cout << "Lebenskfraft von Fee am Anfang des Spieles >" << figur01.einKampf.fee1.getLebenskraft() << std::endl;

    // * Auf diesem Bereich kann in der Laufzeit agiert werden. 
    figur01.typ = figur01.einKampf.werHatDenHeldenhaftenKampfGewonnen();

    figur01.resultatKampf(figur01);

	std::cout << "Lebenskfraft von Ritter am Ende des Spieles >" << figur01.einKampf.ritter1.getLebenskraft() << std::endl;
	std::cout << "Lebenskfraft von Zauberer am Ende des Spieles >" << figur01.einKampf.zauberer1.getLebenskraft() << std::endl;
	std::cout << "Lebenskfraft von Fee am Ende des Spieles >" << figur01.einKampf.fee1.getLebenskraft() << std::endl;

return 0;
}
