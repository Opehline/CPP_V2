// Gisela Neira
// C++ Aufbaukurs E229
// * LEK Vorbereitung
// * Vererbung von Funktion die Operator =
// * ueberlaedt?

#include <iostream>
#include <cstring>

#define OPERATORFunc

class Telefon
{
	protected:
		int laenge;
		char *bewertung;
	
	public:
		Telefon(){};
		Telefon(char *t);
		Telefon(const Telefon& c); // * Copy-Konstruktor
		~Telefon();
		void Ausgabe();
		#ifdef OPERATORFunc
		// * Ueberladen von Operator =
		Telefon& operator=(Telefon& ub); 
		#endif
};

void Telefon::Ausgabe()
{
	std::cout << bewertung << std::endl;
}

Telefon::Telefon(char *t)
{
	laenge = (int)strlen(t);
	bewertung = (char *) malloc(laenge+1);
	strcpy(bewertung, t);
}

Telefon::Telefon(const Telefon& c) 
{
	laenge = c.laenge; 
	bewertung = (char *) malloc(laenge+1);
	strcpy(bewertung, c.bewertung);
}

#ifdef OPERATORFunc
Telefon& Telefon::operator=(Telefon &ub)
{
	// * Auf moegliche Selbstzuweisung ueberpruefen
	// * Eine moegliche Selbstzuweisung des Objekts auf sich
	// * selber soll vermieden werden.

	// * Vieeeeeeeel Code.................


	if(&ub==this)
	{	
		std::cout << "Selbszuweisung" << std::endl;
		return *this; 	
	}
	
	
	free(bewertung);
	
	laenge = ub.laenge;
	bewertung = (char *) malloc(laenge+1);
	strcpy(bewertung, ub.bewertung);
	return *this;
}
#endif

Telefon::~Telefon()
{
	free(bewertung);
}

class Computer
{
	protected:
		int mengeCPU;
};

class SmartPhone : public Telefon, public Computer // * Leere erbende Klasse
{
	public:
		SmartPhone(char *t, int menge);
		SmartPhone(const SmartPhone& c, int menge);
};
		
SmartPhone::SmartPhone(char *t, int menge)
{
	laenge = (int)strlen(t);
	bewertung = (char *) malloc(laenge+1);
	strcpy(bewertung, t);
	mengeCPU = menge;
}

SmartPhone::SmartPhone(const SmartPhone& c, int menge) 
{
	laenge = c.laenge; 
	bewertung = (char *) malloc(laenge+1);
	strcpy(bewertung, c.bewertung); 
}
	
int main()
{
	SmartPhone sf1("Suuppeerr schnelle Verbindung! Unglaublich! Das ist ein Wunder!", 3);
	SmartPhone sf2("(3 Tage spaeter) Hallo....?", 1);
	
	// * Wir wollen den tollen SmartPhone clonen.
	std::cout << "SmartPhone wird geclont!" << std::endl;
	sf2 = sf1;
	sf2.Ausgabe();
	
return 0;
}
