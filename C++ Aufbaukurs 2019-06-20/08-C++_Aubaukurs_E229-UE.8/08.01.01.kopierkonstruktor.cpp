// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.01.01 der C++ Programmierung
// * Kopierkonstruktor
// * Uebergabe Objekt als Parameter zur Erstellung
// * des neuen Objekts

#include <iostream>
#include <string>

using namespace std;


class Schaf
{
    public:
	    int alter;
	    std::string name;

	    Schaf()
	    {
			alter = 0;
			name = "\0";
			cout << "Bin ein Schaf." << endl;
	    }
};

int main()
{
    Schaf dolly;						// * Wird nur einmal aufgerufen
    dolly.alter=15;
    dolly.name="Dolly";
    cout << "\nSchaf sagt: " << endl;
    cout << dolly.alter << endl;
    cout << dolly.name<< endl;

    Schaf dolly_clon(dolly);			// * Das ist Aufruf d. "Kopierkonstruktors"
    cout << "\nKopierter Schaf sagt: " << endl;
    cout << dolly_clon.alter << endl;
    cout << dolly_clon.name<< endl;

return 0;
}
