// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung


#include <iostream>
#include "Geldautomaten.hpp"
#include "Ausnahmefallbehandlung.hpp"

const short int OPTIONEN=5;

int main()
{
	unsigned int evaluation=0, id=0;
	Ausnahmefallbehandlung eingabeEval;

    Geldautomaten b1;

	std::cout << "\n*********************** Eingabewerte: ***********************"
			  << "\n1: Anbindung erfolgreich \n"
			  << "2: Fehler\n";
	std::cout << "3: ID+Password ist falsch \n"; 
	std::cout << "4: Password ist falsch \n" << std::endl;

	std::cout << "Eingabe Serie Geldautomat: > ";
	std::cin >> id;
	b1.set_eingabeWert(id);
	std::cin.clear();
	id=eingabeEval.evalfEingabe(b1);

	std::cout << "Eingabe Evaluation Anbindung: > ";
	std::cin >> evaluation;
	b1.set_eingabeWert(evaluation);
	std::cin.clear();
	evaluation=eingabeEval.evalfEingabe(b1);


	eingabeEval.evalfSystemanbindung(evaluation, id, b1);

    return 0;
} 
