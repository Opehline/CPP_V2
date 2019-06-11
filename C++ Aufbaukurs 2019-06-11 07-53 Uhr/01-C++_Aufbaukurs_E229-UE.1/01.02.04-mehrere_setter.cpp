// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.02.04 der C++ Programmierung
// * Setter

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

		void setXKoordinate(int _x)
		{
			x = _x;
			//std::cout << "X-Koordinate: > " << x <<  std::endl;
		}

		void setXKoordinateYKoordinate(int _x, int _y)
		{
			x = _x;
			y = _y;
			//std::cout << "X-Koordinate: > " << x << "\nY-Koordinate: > " << y << std::endl;
		}

};

int main(int argc, char **argv){

    Punkt p1;
    p1.setPunkt(5, 6, 9);
    Punkt p2;
    p2.setXKoordinate(12);
    Punkt p3;
    p3.setXKoordinateYKoordinate(3,9);
    //std::cout << p1.x;

return 0;
}
