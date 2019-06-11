// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.02.03 der C++ Programmierung
// * Ein Setter - Zugriff von aussen auf private-Variablen
// * Fehler!

#include <iostream>

class Punkt
{
    private:
		int x;
		int y;
		int z;

    public:
		Punkt(){ std::cout << "Es wird ein 3D Punkt erstellt..." << std::endl;}

		// * Set-Methode (Funktion)
		void setPunkt(int _x, int _y, int _z)
		{
			x = _x;
			y = _y;
			z = _z;
			//std::cout << "X-Koordinate: > " << x << "\nY-Koordinate: > " << y << "\nZ-Koordinate: > " << z << std::endl;
		}
};

int main(int argc, char **argv){

    Punkt p1;
    p1.setPunkt(4, 6, 9);
	// * Versuch nun auf private-Variablen ausserhalb der Klasse zuzugreifen
	std::cout << p1.x << std::endl;

return 0;
}
