// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.01.03 der C++ Programmierung
// * Kopierkonstruktor
// * als Funktion

#include <iostream>
#include <cstring>
#include <vector>
#include <stdlib.h>

//#define KOPYCONST

class Schaf
{
	private:
		int laenge;
		char* qualitaet=0;

	public:
		Schaf(char*);
		~Schaf();

		#ifdef KOPYCONST
		Schaf(const Schaf& c); // * Copy-Konstruktor
		#endif

		char* getqualitaet();
		void Ausgabe();
};

void Schaf::Ausgabe()
{
	std::cout << qualitaet << std::endl;
}

Schaf::Schaf(char* t)
{
	laenge = (int)strlen(t);
	qualitaet = (char *) malloc(laenge+1);

	std::cout << "Std. Konstruktor Heap-qualitaet> "
              << static_cast<void*>(qualitaet)
              << std::endl;

	strcpy(qualitaet, t);
}

#ifdef KOPYCONST
// * ****** der copy-Konstruktor ******
// * Es wird eine "perfekte" Kopie erzeugt
Schaf::Schaf(const Schaf& c)
#if 0
{
	laenge = c.laenge; // * Es wird die in der private-Variable gespeicherte Information kopiert.
	qualitaet = (char *) malloc(laenge+1);
	//std::cout << "Kopie > " << &qualitaet << std::endl;

    std::cout << "Copy Konstruktor Heap-qualitaet> "
              << static_cast<void*>(qualitaet)
              << std::endl;

	strcpy(qualitaet, c.qualitaet); // * Es wird die in der private-Variable gespeicherte Information kopiert.
									// * Saubere Kopie mit eigenen Textbuffer!!
}
#else
{
    std::cout << "Copy Konstruktor Heap-qualitaet> "
              << static_cast<void*>(qualitaet)
              << std::endl;
}
#endif // 1
#endif

char* Schaf::getqualitaet()
{
	return qualitaet;
}

Schaf::~Schaf()
{
	std::cout << "Destruktor> "
              << static_cast<void*>(qualitaet)
              << " "
              << this << std::endl;
	qualitaet=0;
	delete[] qualitaet;
	//std::cout << "Destruktor > "
    //          <<qualitaet << std::endl;
}





class Labor
{
	public:
		void LaborAuswertung(Schaf SchafUntersuchung);
};

void Labor::LaborAuswertung(Schaf SchafUntersuchung)
{
    std::cout << "Die Auswertung der Laborergebnisse des Klon: "
			  << "\"" << SchafUntersuchung.getqualitaet() << "\""
			  << std::endl;
			  //std::cout << "Kopie > " << &SchafUntersuchung.qualitaet << std::endl;
}

int main()
{
    Labor laborProbe;
    Schaf schaf("Einwandfrei!");
	//std::cout << "&schaf> " << &schaf << std::endl;
	laborProbe.LaborAuswertung(schaf); // * Hier wird copy-Konstruktor aufgerufen!

    std::cout << "Ende von main-Funktion..." << std::endl;

return 0;
}
