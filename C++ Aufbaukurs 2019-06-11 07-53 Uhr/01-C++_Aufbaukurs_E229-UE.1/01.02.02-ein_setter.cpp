// Gisela Neira
// C++ Aufbaukurs E229
// * Basisprogramm 01.02.02 der C++ Programmierung
// * Ein Setter

#include <iostream>

class Punkt
{
    private:
		int x;
		int y;
		int z;

    public:
		Punkt()
		{ std::cout << "Es wird ein Punkt erstellt im dreidimensionalen Raum..." << std::endl; }

		// * Set-Methode (Funktion)
		void setPunkt(int _x, int _y, int _z)
		{
		    x = _x;
		    y = _y;
		    z = _z;
		    /*std::cout << "X-Koordinate: > " << x
                      << "\nY-Koordinate: > " << y
                      << "\nZ-Koordinate: > " << z << std::endl;*/
		}
};

int main(int argc, char **argv){

    Punkt p1;
    p1.setPunkt(4, 6, 9);

return 0;
}
