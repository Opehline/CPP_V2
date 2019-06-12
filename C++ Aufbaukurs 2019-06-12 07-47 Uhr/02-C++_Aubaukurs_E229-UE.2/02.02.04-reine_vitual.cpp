// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.02.04 der C++ Programmierung
// * Reine virtuelle Funktionen
// * Kann NICHT instantiert werden!

#include <iostream>

class Automaten // * Basisklasse > modell oder abstrakte Klasse
{
	public:
		// * Reine virtuelle Funktion wird angelegt
		virtual void set_allInformation() = 0;

		// * Keine reine virtuelle Funktion ruft virtuelle member Funktion
		void funk_prob()
		{
			set_allInformation();
		}
};

int main()
{
	Automaten automaten; // * Nicht moeglich!
    return 0;
}
