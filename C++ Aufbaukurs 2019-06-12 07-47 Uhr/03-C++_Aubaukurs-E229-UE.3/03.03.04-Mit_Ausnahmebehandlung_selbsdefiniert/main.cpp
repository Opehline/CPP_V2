// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung


#include <iostream>
#include "Geldautomaten.hpp"
#include "Ausnahmefallbehandlung.hpp"

int main()
{
	int evaluation=0, id=0;
    Geldautomaten b1;

    std::cout << "Geldautomat b1" << std::endl;
	std::cout << "Eingabe Evaluation Anbindung: > ";
	std::cin >> evaluation; // 1
	std::cout << "Eingabe Serie Geldautomat: > ";
	std::cin >> id;

	try
	{
		if(std::cin.fail())
		{
			std::cout << "\n**** Ausnahme 3 wurde hervorgerufen! ****" << std::endl ;
			std::cin.clear();
			throw Ausnahmebehandlung(AUSNAHME_C);	// * Selbstdefinierter Rueckgabewert;
			return 0;
		}
	}
	catch(Ausnahmebehandlung a)
	{
		std::cerr << "\nEingabewert ist keine positive Ganzzahl!\n"
				  << "Fehlercode > "
				  << a.get_grund() << std::endl;
		return 0;
	}

	try
	{
		b1.pubic_SystemAnbindungsProzess(id, evaluation);
	}
	catch(Ausnahmebehandlung a)
	{
		switch(a.get_grund())
		{
			case AUSNAHME_A:
				std::cerr << "Es wurde eine bisher nicht definierte Auswahl eingegeben." << std::endl;
				break;
			case AUSNAHME_B:
				 std::cerr << "Es wurde ein Wert ausserhalb des erlaubten Bereichs eingegeben." << std::endl;
				break;
		}
	}

    return 0;
};
