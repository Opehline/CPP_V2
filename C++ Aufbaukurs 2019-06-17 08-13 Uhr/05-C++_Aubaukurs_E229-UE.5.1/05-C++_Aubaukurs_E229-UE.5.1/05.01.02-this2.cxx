// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.01.02 der C++ Programmierung
//   Kleines Beispiel this-Operator

#include <iostream>

class Haus
{
    private:
		int Fenster/*=0*/;
		int Tueren;
		int Stockwerke;
		int Material;
    public:
		// * Es werden die gleichen Namen-Parameter benutzt wie der Namen
		// * der privaten Variablen
		void setVariablen(int Fenster, int Tueren, int Stockwerke, int Material)
		{
			Fenster = Fenster;
			Tueren = Tueren;
			Stockwerke = Stockwerke;
			Material = Material;
		}
		void meinHaus()
		{
			std::cout << "Mein Haus hat " << std::endl;
			std::cout << "Fenster: " << Fenster << std::endl;
			std::cout << "Tueren: " << Tueren << std::endl;
			std::cout << "Stockwerke: " << Stockwerke << std::endl;
			std::cout << "Material: " << Material << std::endl;
		}

};

int main()
{

   Haus meinhaus;
   meinhaus.setVariablen(8,2,3,1);
   meinhaus.meinHaus();
}
