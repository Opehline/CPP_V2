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
		automat.Eingabe(automat.get_eingabeWert());
	}
	catch(Ausnahmefallbehandlung& a)
	{	
		catch1(a, automat);
	}
}

int Ausnahmefallbehandlung::evalfEingabe()
{   
	try
	{	
		EinAutomat.Eingabe(EinAutomat.get_selec());
	}
	catch(Ausnahmefallbehandlung& a)
	{	
		catch1(a, EinAutomat);
	}
}

int Ausnahmefallbehandlung::catch1(Ausnahmefallbehandlung& a, Geldautomaten& automat)
{
		nochmal:
		unsigned char wahl=0;
		
		std::cin.ignore();		
		
		std::cout << "\nNoch mal letzte Eingabe versuchen? "
				  << "\n\n\t0 = Nein \n\talles andere = Ja \n\n> ";
		std::cin >> wahl;
		std::cin.clear();
	
		if((int)wahl==48)
		{
			std::cout << "\nProgramm bricht ab... Bis bald...\n" << std::endl;
			exit(0);
		}
		else
		{
			unsigned short int eingabe=0;
			std::cout << "Neue eingabe ............. > ";
			std::cin.ignore();
			std::cin  >> eingabe;
			std::cin.clear();

			if(!eingabe)
			{
				std::cout << "\n********* Wiederholter Fehler wurde"
						  <<" hervorgerufen! *********" << std::endl;
				//std::cout << "Programm bricht ab..." << std::endl;
				goto nochmal;
				//exit(0);
			}
			else 
			{return eingabe;}

		return automat.get_eingabeWert();
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
				std::cout << "\nEs wurde eine bisher nicht definierte"
						  <<" Auswahl eingegeben.\n" << std::endl;
			break;
			case AUSNAHME_B:
				std::cout << "\nEs wurde ein Wert ausserhalb des erlaubten"
						  <<" Bereichs eingegeben.\n" << std::endl;
			break;
		}
	}
}

