// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung

#include <iostream>
#include "Geldautomaten.hpp"
#include "Ausnahmefallbehandlung.hpp"

Geldautomaten::Geldautomaten()
{ 
		std::cout << "\n\n************* Neuer Geldautomat " 
				  <<" ist fertig!!"
		 		  <<" *************\n\n" << std::endl;  
}
Geldautomaten::~Geldautomaten()
{ ; }

void Geldautomaten::set_eingabeWert(int _eingabeWert)
{
	eingabeWert = _eingabeWert;
}
int Geldautomaten::get_eingabeWert()
{
	return eingabeWert;
}

void Geldautomaten::set_selec(int _selec)
{
	selec = _selec;
}
int Geldautomaten::get_selec()
{
	return selec;
}

