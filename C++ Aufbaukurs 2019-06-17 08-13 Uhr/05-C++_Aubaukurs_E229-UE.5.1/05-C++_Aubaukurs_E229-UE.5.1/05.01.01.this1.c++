// Gisela Neira
// C++ Aufbaukurs E229
// * this-Operator 05.01.01 der C++ Programmierung
//   Implizite existenz des this-Operator

#include <iostream>

class Haus
{
    private:
		int Fenster;
		int Tueren;
		int Stockwerke;
		int Material;

    public:
		void setVariablen(int _Fenster, int _Tueren, int _Stockwerke, int _Material)
		{
			// * Implizit wird IMMER ein this-Pointer angelegt

			#if 1
				Fenster = _Fenster;
				Tueren = _Tueren;
				Stockwerke = _Stockwerke;
				Material = _Material;
			#endif

			#if 1
			// * this Speichert die Adresse von meinHaus-Objekt.
			// * so weiss der Compiler, dass this->Fenster eigentlich
			// * meinhaus-Fenster ist.
			// * Folgendes ist dem vorherigen identisch!
				this->Fenster = _Fenster;
				this->Tueren = _Tueren;
				this->Stockwerke = _Stockwerke;
				this->Material = _Material;
			#endif
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
