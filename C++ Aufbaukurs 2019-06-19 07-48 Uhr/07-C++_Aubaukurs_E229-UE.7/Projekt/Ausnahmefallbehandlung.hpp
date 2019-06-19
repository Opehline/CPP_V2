

#ifndef Ausnahmefallbehandlung_H
#define Ausnahmefallbehandlung_H

#include "DateiVerwaltung.hpp"
class Ausnahmefallbehandlung
{
	private:
		long double *a;
		DateiVerwaltung datei;
		
	public:
		Ausnahmefallbehandlung();
		void ueberPruefungOeffnenDatei(std::ofstream& datei);// * Da Forwaertsdeklaration Pointer, uebergabe an Funktion als Referenz
		int abfrageSpeicher();
		~Ausnahmefallbehandlung();
};
#endif
