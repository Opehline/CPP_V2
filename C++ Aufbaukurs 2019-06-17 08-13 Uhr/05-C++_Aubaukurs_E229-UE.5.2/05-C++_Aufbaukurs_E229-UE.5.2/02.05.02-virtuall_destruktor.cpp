// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.05.02 der C++ Programmierung
// * Virtueller Destruktor (Heap-Overflow)
// * Bei erbenden Klassen sollte der Destruktor
// * immer virtual sein, auch wenn nicht
// * unbeding deallokiert wird.

#include <iostream>

#define While

using namespace std;

// * BASISKLASSE
class Toechter
{
	public:
	#ifdef While
		virtual ~Toechter(){} 					// * Dieser Destruktor tut zwar nichts, aber da virtual wird
	#endif										// * der Destruktor der erbenden Klasse aufgerufen.
};

class DenkendeTochterMitGuteNase : public Toechter
{
    private:
		double * GedankenAmTag = new double[10000000];

   	public:
		DenkendeTochterMitGuteNase()
		{
			std::cout << "Tochter ist aufgewacht.\n" << std::endl;
		}

		/*virtual*/ ~DenkendeTochterMitGuteNase() /*overrride*/ 	// * Nicht noetig hier virtual zu deklarieren,
		{				   	   						// * aber die Code-Qualität wird besser.
			std::cout << "Es wird dealokiert!" << std::endl;
			delete[] GedankenAmTag;
 		}

};


int main()
{
	#ifndef While
		Toechter * joji = new DenkendeTochterMitGuteNase(); 	//	* Es wird zwar joji deallokiert, nicht aber
		delete joji;											//  * DenkendeTochterMitGuteNase
	#else
    while(true) // * Ein Heap-overflow
	{
		Toechter * joji = new DenkendeTochterMitGuteNase(); 	// * Hier wird versucht einen Destruktor in Toechter
		delete joji;							// * aufzurufen, den es aber nicht gibt.
    }											// * Es wird immer wieder ein Array double[1000000] allokiert.
												// * Es werden keine Aufraeumarbeiten (Speicher wieder freizugeben) erlaedigt.
												// * Ein Heap-Overflow kann passieren.
	#endif

return 0;
}
