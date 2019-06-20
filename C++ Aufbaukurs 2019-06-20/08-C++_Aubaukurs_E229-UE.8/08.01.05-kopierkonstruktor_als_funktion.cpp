// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.01.04 der C++ Programmierung
// * Kopierkonstruktor
// * als Funktion
// * Nicht erwuenschtes Resultat, da = nicht
// * ueberladen.

#include <iostream>
#include <cstring>
//#include <stdlib.h>


// * Erste Klasse
class Schaf
{
	private:
		int laenge;
		char *qualitaet;
	
	public:
		Schaf(char *t);
	
		Schaf(const Schaf& c); // * Copy-Konstruktor

		~Schaf();
		char* getqualitaet();
		void Ausgabe();
};

void Schaf::Ausgabe()
{
	std::cout << qualitaet << std::endl;
}

Schaf::Schaf(char *t)
{
	laenge = (int)strlen(t);
	qualitaet = (char *) malloc(laenge+1);
	strcpy(qualitaet, t);
}

// * ****** der copy-Konstruktor ******
// * Es wird eine "perfekte" Kopie erzeugt
Schaf::Schaf(const Schaf& c) 
{
	laenge = c.laenge; // * Es wird die in der private-Variable gespeicherte Information kopiert.
	qualitaet = (char *) malloc(laenge+1);
	strcpy(qualitaet, c.qualitaet); // * Es wird die in der private-Variable gespeicherte Information kopiert.
}

char* Schaf::getqualitaet()
{
	return qualitaet;
}

Schaf::~Schaf()
{
	qualitaet=0;
	free(qualitaet);
}


int main()
{
	Schaf schaf1("Hohe Qualitaet!");
	Schaf schaf2("Schlechte Qualitaet.....");
	
	// * Wir wollen es aber gut haben.

	schaf2 = schaf1; 	// * Oh! Ein Problem...
	schaf2.Ausgabe();	// * Durch den Zuweisungsoperator wird nicht der copy-Konstruktor
						// * aufgerufen. Das Programm bricht ab!
	
	
return 0;
}
