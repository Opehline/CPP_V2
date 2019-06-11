// Gisela Neira
// C++ Aufbaukurs E229
// * Basisprogramm 01.04.01 der C++ Programmierung
// * Konstruktor - leer

#include <iostream>

using namespace std;

class Vater
{
   	public:
		Vater(int x, int y)
		{
			std::cout << "Ich bin ein Vater und bewege mich von "
					  << x << " nach " << y << "."
					  << std::endl;
        }
		Vater(){ std::cout << "Hopla!" << std::endl; };
		Vater(){ std::cout << "Ich bin ein Vater und Ehemann!"<< std::endl; };
};

int main(int argc, char **argv){

	Vater memo; 	// Konstruktor funktioniert ohne Aufruf!

return 0;
}
