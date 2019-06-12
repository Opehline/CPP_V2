// Gisela Neira
// C++ Aufbaukurs E229
// * Ausnahmefallbehandlug 03.03.02 der C++ Programmierung
//   try-catch-Anweisungen erweitert

#include "Ausnahmefallbehandlung.hpp"
#include "multiple_zusammengestzt.hpp"


using namespace std;


int main()
{
	alterEingeben();
	try 
	{
		wertEingeben();
	}
	catch(Ausnahmefallbehandlung a)
	{
		switch(a.get_grund())
		{
			case AUSNAHME_A:
				std::cout << "Es wurde ein Wert ausserhalb des erlaubten Bereichs eingegeben." << std::endl;
				break;
			case AUSNAHME_B:
				std::cout << "Wiederholter Ausnahmefall!." << std::endl;	
				std::cout << "Kein gueltiger Eingabewert." << std::endl;
				break;
		}
	}

return 0;
}
