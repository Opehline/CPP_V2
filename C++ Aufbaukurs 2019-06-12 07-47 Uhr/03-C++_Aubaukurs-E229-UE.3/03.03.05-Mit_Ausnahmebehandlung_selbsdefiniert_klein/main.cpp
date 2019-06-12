// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung


#include <iostream>
#include "Geldautomaten.hpp"
#include "Ausnahmefallbehandlung.hpp"

int main()
{
	unsigned int evaluation=0, id=0;
	Ausnahmefallbehandlung eingabeEval;
	Geldautomaten b1;

	std::cout << "Eingabe Evaluation Anbindung: > ";
	std::cin >> evaluation;
	eingabeEval.evalfEingabe(b1);

	std::cout << "Eingabe Serie Geldautomat: > ";
	std::cin >> id;
	eingabeEval.evalfEingabe(b1);

	eingabeEval.evalfSystemanbindung(evaluation, id, b1);

    return 0;
}
