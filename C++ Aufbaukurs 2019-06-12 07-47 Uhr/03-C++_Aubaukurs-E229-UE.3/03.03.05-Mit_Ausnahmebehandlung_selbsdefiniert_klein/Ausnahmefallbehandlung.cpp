#include <iostream>
#include "Geldautomaten.hpp"
#include "Ausnahmefallbehandlung.hpp"

Ausnahmefallbehandlung::Ausnahmefallbehandlung(){}
Ausnahmefallbehandlung::~Ausnahmefallbehandlung(){}

Ausnahmefallbehandlung::Ausnahmefallbehandlung(int _grund)
{
	grund = _grund;
}

int Ausnahmefallbehandlung::get_grund()
{ return grund; }

int Ausnahmefallbehandlung::evalfEingabe(Geldautomaten& automat)
{    
	try
	{
		automat.Eingabe();
	}
	catch(Ausnahmefallbehandlung a)
	{	
		std::cerr << "\nEingabewert ist keine positive Ganzzahl!"
				  << " Fehlercode > " << a.get_grund() << std::endl;
		std::cout << "Programm bricht ab... Bis bald..." << std::endl;
		exit(0);
	}
}

int Ausnahmefallbehandlung::evalfSystemanbindung(unsigned int eval, 
												 unsigned int ident, 
												 Geldautomaten& automat)
{    
	try
	{
		automat.SystemAnbindungsProzess_public(ident, eval);
	}
	catch(Ausnahmefallbehandlung a)
	{
		switch(a.get_grund())
		{
			case AUSNAHME_A:
				std::cerr << "Es wurde eine bisher nicht definierte "
						  << "Auswahl eingegeben." << std::endl;
						  break;
			case AUSNAHME_B:
				std::cerr << "Es wurde ein Wert ausserhalb des erlaubten "
						  << "Bereichs eingegeben." << std::endl;
						  break;
		}
	}
}
