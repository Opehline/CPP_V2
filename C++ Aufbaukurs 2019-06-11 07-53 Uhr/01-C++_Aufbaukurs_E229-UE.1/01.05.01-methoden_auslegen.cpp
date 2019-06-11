// Gisela Neira
// C++ Aufbaukurs E229
// * Basisprogramm 01.05.01 der C++ Programmierung
// * Auslegen von Methoden


#include <iostream>

class Punkt
{
    private:
		int x;
		int y;
		int z;
    public:
		// * Deklaration des Konstruktors
		Punkt();
		~Punkt();
		// * Deklaration der Methoden getters und setters
		void setPunkt(int _x, int _y, int _z);
		int getXKoordinate();
		int getYKoordinate();
		int getZKoordinate();
};

// * Auslegen des Konstruktors:
Punkt::Punkt()
{
	// * Konstruktor zum initialisierenb der schreibgeshuetzten Variablen
	x=0;
	y=0;
	z=0;
	std::cout << "Es wird ein 3D Punkt erstellt..." << std::endl;
}

Punkt::~Punkt()
{
	;
}
// * Auslegen der Methoden:
// * set-Methode (Funktion)
void Punkt::setPunkt(int _x, int _y, int _z)
{
    x = _x;
    y = _y;
    z = _z;
    /*std::cout << "X-Koordinate: > " << x
			  << "\nY-Koordinate: > " << y
			  << "\nZ-Koordinate: > " << z << std::endl;*/
}

// * get-Methode (Funktion)
int Punkt::getXKoordinate()
{
    return x;
}
int Punkt::getYKoordinate()
{
    return y;
}
int Punkt::getZKoordinate()
{
    return z;
}


int main(int argc, char **argv){

    Punkt p1;
    p1.setPunkt(5, 6, 9);

    std::cout << p1.getXKoordinate() << std::endl;
    std::cout << p1.getYKoordinate() << std::endl;
    std::cout << p1.getZKoordinate() << std::endl;

return 0;
}
