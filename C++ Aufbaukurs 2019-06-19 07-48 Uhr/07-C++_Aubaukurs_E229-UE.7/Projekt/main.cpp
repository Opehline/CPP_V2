// Gisela Neira
// C++ Aufbaukurs E229
// * Programm Projekt C++ Programmierung
// * Ausnahmefallbehandlung + DateiVerwaltung

#include "Ausnahmefallbehandlung.hpp"
#include "DateiVerwaltung.hpp"

int main()
{
	int fehler=0;
	Ausnahmefallbehandlung abfrage;
	fehler=abfrage.abfrageSpeicher();
	if(fehler==0)
	{ std::cout << "Weiterer Programmcode... " << std::endl; }
	
return 1;
}
