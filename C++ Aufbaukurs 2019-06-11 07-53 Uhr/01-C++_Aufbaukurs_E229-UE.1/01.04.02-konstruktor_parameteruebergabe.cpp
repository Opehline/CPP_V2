// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.04.02 der C++ Programmierung
// * Konstruktor - Parameteruebergabe

#include <iostream>

using namespace std;

class Vater
{
   	public:
        Vater(){ std::cout << "Ich bin ein Vater und Ehemann!"<< std::endl; };
        Vater(int x, int y)
        {
            std::cout << "Ich bewege mich von "
                      << x << " nach " << y << "."<< std::endl;
        };
        //Vater(int h, int p){ ; };
        ~Vater(){std::cout << "Hallo Marcel" << std::endl;}
};


int main(int argc, char **argv){

	Vater memo;
	Vater memi(5,6);		// Konstruktor funktioniert ohne Aufruf mit Parameteruebergabe.

return 0;
};
