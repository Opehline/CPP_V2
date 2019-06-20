// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.01.02 der C++ Programmierung
// * Kopierkonstruktor
// * Uebergabe Objekt als Parameter zur Erstellung
// * des neuen Objekts - Klon kann Daten aendern

#include <iostream>
#include <string>


using namespace std;


class Schaf
{
    public:
    int alter;
    string name;

    Schaf()
    {
		alter = 0;
		name = "\0";
		cout << "Bin ein Schaf." << endl;
    }

    Schaf(const Schaf& KLonSchaf) 		// * Kopierkonstruktor
    {
		alter = 0;
		name = "\0";
		cout << "Bin ein Klon-Schaf." << endl;
    }
};

int main()
{

    Schaf dolly;						// * Wird nur einmal aufgerufen.
    Schaf dolly_clon(dolly);			// * Hier wird der Kopierkonstruktor aufgerufen.

return 0;
}
