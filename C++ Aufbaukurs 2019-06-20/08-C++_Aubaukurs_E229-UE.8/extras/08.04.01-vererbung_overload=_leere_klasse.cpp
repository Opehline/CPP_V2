// Gisela Neira
// C++ Aufbaukurs E229
// * LEK Vorbereitung
// * Vererbung von Funktion die Operator =
// * ueberlaedt?

#include <iostream>
#include <cstring>

#define OPERATORFunc

class Schaf
{
	protected:
		int laenge;
		char *bewertung;

	public:
		Schaf(){};
		Schaf(char *t);
		Schaf(const Schaf& c); 			// * Kopierkonstruktor
		~Schaf();

		void Ausgabe();
		#ifdef OPERATORFunc
		// * Ueberladen von Operator =
		Schaf& operator=(Schaf& ub);
		#endif
};

void Schaf::Ausgabe()
{
	std::cout << bewertung << std::endl;
}

Schaf::Schaf(char *t)
{
	laenge = (int)strlen(t);
	bewertung = (char *) malloc(laenge+1);
	strcpy(bewertung, t);
}

Schaf::Schaf(const Schaf& c)
{
	laenge = c.laenge;
	bewertung = (char *) malloc(laenge+1);
	strcpy(bewertung, c.bewertung);
}

#ifdef OPERATORFunc
Schaf& Schaf::operator=(Schaf &ub)
{
	free(bewertung);
	// * Auf moegliche Selbstzuweisung ueberpruefen
	// * Eine moegliche Selbstzuweisung des Objekts auf sich
	// * selber soll vermieden werden.

	if(&ub==this)
	{
		std::cout << "Selbszuweisung" << std::endl;
		return *this;
	}

	std::cout << "operator = Funktion" << std::endl;
	laenge = ub.laenge;
	bewertung = (char *) malloc(laenge+1);
	strcpy(bewertung, ub.bewertung);
	return *this;
}
#endif

Schaf::~Schaf()
{
	free(bewertung);
	std::cout << "Heapspeicher wurde befreit..!" << std::endl;
}

class Stall : public Schaf
{
	public:
	    Stall();
		Stall(char *t);
		Stall(const Stall& c);
};
Stall::Stall()
{
    ;
}
Stall::Stall(char *t)
{
	laenge = (int)strlen(t);
	bewertung = (char *) malloc(laenge+1);
	strcpy(bewertung, t);
}

Stall::Stall(const Stall& c)
{
	laenge = c.laenge;
	bewertung = (char *) malloc(laenge+1);
	strcpy(bewertung, c.bewertung);
}

int main()
{
    Stall schaf01("Hoechste Qualitaet! Hervorragend! Einwandfrei!");
	Stall schaf02("Huch? Was ist mit diesem Schaf passiert? Wurde dieser nicht gut ernaehrt?");

	// * Wir wollen es aber spannend haben.
	schaf02 = schaf01;
	schaf02.Ausgabe();

return 0;
}
