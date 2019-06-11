// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.02.05 der C++ Programmierung
// * Getter

#include <iostream>

class Punkt
{
    private:
		int x;
		int y;
		int z;

    public:
		Punkt()
		{
		    // * Initialisieren der Werte der Variablen der Klasse
		    x=0;
		    y=0;
		    z=0;
            std::cout << "Es wird ein 3D Punkt erstellt..." << std::endl;
        }

		// * set-Methode (Funktion)
		void setPunkt(int _x, int _y, int _z)
		{
			x = _x;
			y = _y;
			z = _z;
		}

		void setXKoordinate(int _x)
		{
			x = _x;
		}

		void setXKoordinateYKoordinate(int _x, int _y)
		{
			x = _x;
			y = _y;
		}

		// * get-Methode (Funktion=
		int getXKoordinate()
		{
			return x;
		}
		int getYKoordinate()
		{
			return y;
		}
		int getZKoordinate()
		{
			return z;
		}

};

int main(int argc, char **argv){

    Punkt p1, p2;
    p1.setPunkt(5, 6, 9);
    p2.setXKoordinateYKoordinate(9,8);
    //p1.setXKoordinate(15);
    //std::cout << p1.x << std::endl;
    std::cout << "p1> " << p1.getXKoordinate() << std::endl;
    std::cout << "p1> " << p1.getYKoordinate() << std::endl;
    std::cout << "p1> " << p1.getZKoordinate() << "\n" << std::endl;

    std::cout << "p2> " << p2.getXKoordinate() << std::endl;
    std::cout << "p2> " << p2.getYKoordinate() << std::endl;
    std::cout << "p2> " << p2.getZKoordinate() << std::endl;

return 0;
}
