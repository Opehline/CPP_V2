// Gisela Neira
// C++ Aufbaukurs E229
// * Basisprogramm 01.02.01 der C++ Programmierung
// * Kein Setter, warum Fehler?

#include <iostream>

class Punkt
{
    private:
		int x;
		int y;
		int z;

    public:
		Punkt(){}; // * Default-Konstruktor
};


int main(void)
{

    Punkt p1;
    // * Nicht moeglich zugriff von aussen auf private-Variablen
    p1.x = 4;
    p1.y = 6;
    p1.z = 9;

return 0;
}
