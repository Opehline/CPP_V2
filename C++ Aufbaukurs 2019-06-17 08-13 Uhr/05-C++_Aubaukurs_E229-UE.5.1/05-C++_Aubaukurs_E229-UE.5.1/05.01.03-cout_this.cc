// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.01.03 der C++ Programmierung
// * Kleines Beispiel this-Operator

#include <iostream>

class Haus
{
    private:
		int Fenster;
		int Tueren;
		int Stockwerke;
		int Material;

    public:
		void setVariablen(int Fenster, int Tueren, int Stockwerke, int Material)
		{
			this->Fenster = Fenster;
			this->Tueren = Tueren;
			this->Stockwerke = Stockwerke;
			this->Material = Material;
			// * Adresse des Objekts meinhaus wird ausgegeben!!
			std::cout << this << std::endl;
		}
};

int main()
{

   Haus meinhaus;
   // * Adresse des Objekts meinhaus wird ausgegeben.
   std::cout << &meinhaus << std::endl;
   meinhaus.setVariablen(16,10,3,1);
}
