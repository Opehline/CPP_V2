// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.01.07 C++ Programmierung
// * Datei schreiben (Klasse)

#include <iostream>
#include <fstream>
#include <ctime>
#include "Ausnahmefallbehandlung.hpp"

#ifndef DateiVerwaltung_H
#define DateiVerwaltung_H

class Ausnahmefallbehandlung; 	// * Forwaertsdeklaration

class Zeit
{
	protected:
		time_t t;
		char* dt;
		
	public:
		Zeit();
};

class DateiVerwaltung : private Zeit
{
	private:
		Ausnahmefallbehandlung* pruefung;					// * Forwaertsdeklaration muss als Referenz oder Pointer gegeben sein
		Zeit momentaneZeit;
		std::ofstream normalLog;
		std::ofstream errorLog;
		
	public:
		DateiVerwaltung();
		~DateiVerwaltung();
		void ablaufNormal();		
		void ablaufFehler(std::bad_alloc& badAlloc);		// * Da Forwaertsdeklaration Pointer, uebergabe an Funktion als Referenz
		
};
#endif
