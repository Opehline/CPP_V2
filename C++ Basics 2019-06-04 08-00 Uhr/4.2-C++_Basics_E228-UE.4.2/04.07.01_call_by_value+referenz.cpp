// Gisela Neira
// C++ Basics E228
// * Programm 05.07.01 der C/C++ Programmierung
// * Call by Value und Call by Referenz einer Variable
// * (Kopie der Variable an Funktion oder eine Referenz erstellen)

#include <iostream>

void call_by_valueCuadrat(double y) // * Es wird eine Kopie von b erstellt und diese
{								 // * Kopie wird modifizert
	//std::cout <<"Vor << y << std::endl;
	y *= y; // * 	y = y * y;
	std::cout <<"Quadrat " << y << std::endl;
}

void call_by_referenceCuadrat(double *y) // * Es wird b "selbst uebergeben" und modifizert
{
	//int a = *y;
	//*y = a*a; 	// * Richtig ist: (*y *= *y); // *y = *y * *y;
	*y = *y * *y;
	std::cout <<"Quadrat " << *y << std::endl;
}

|---7---|---7----|
|---7---|---0xce----|

int main()
{
	double b=7;

	std::cout << "b = " << b << " vor ermitteln des Cuadratwerts." << std::endl;
	//call_by_valueCuadrat(b);
	call_by_referenceCuadrat(&b);
	std::cout <<"b = " << b << " nach ermitteln des Cuadratwerts." << std::endl;

	return 0;
}

