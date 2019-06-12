// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung


#include <iostream>
#include "Geldautomaten.hpp"
#include <exception>



int main()
{
	unsigned int evaluation=0, id=0;

    std::cout << "Geldautomat b1" << std::endl;
    Geldautomaten b1;
    std::cout << "\n***Eingabewerte:***\n0: Fehler \n1: Anbindung erfolgreich\n";
	std::cout << "2: ID+Password ist falsch \n";
	std::cout << "3: Password ist falsch \n" << std::endl;
	std::cout << "Eingabe Evaluation Anbindung: > ";
	std::cin >> evaluation;

		try
		{
			if(std::cin.fail())
			{
				std::cerr << "\n**** Ausnahme wurde hervorgerufen! ****" << std::endl ;
				std::cin.clear();
				throw evaluation;
				return 0;
			}
		}
		catch(unsigned int evaluation)
		{
			std::cerr << "\nEingabewert ist keine positive Ganzzahl! " << std::endl;
			return 0;
		}

	std::cout << "Eingabe Serie Geldautomat: > ";
	std::cin >> id;

		try
		{
			b1.public_SystemAnbindungsProzess(id, evaluation);
		}
		catch(std::exception e)
		{
			std::cout << e.what() << std::endl;
		}


    return 0;
}
