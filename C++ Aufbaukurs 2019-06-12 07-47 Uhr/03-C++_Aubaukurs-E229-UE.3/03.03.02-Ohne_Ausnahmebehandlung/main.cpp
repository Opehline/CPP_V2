// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung


#include <iostream>
#include "Geldautomaten.hpp"

int main()
{
	int evaluation=0, id=0;

    Geldautomaten b1;
    //b1.public_SystemAnbindungsProzess(1,12);

	#if 1
	std::cout << "\n***Eingabewerte:***\n0: Fehler \n1: Anbindung erfolgreich\n";
	std::cout << "2: ID+Password ist falsch \n";
	std::cout << "3: Password ist falsch \n" << std::endl;

	std::cout << "Eingabe Evaluation Anbindung: > ";
	std::cin >> evaluation;
	std::cout << "Eingabe Serie Geldautomat: > ";
	std::cin >> id;

    b1.public_SystemAnbindungsProzess(id,evaluation);
	#endif

    return 0;
};
