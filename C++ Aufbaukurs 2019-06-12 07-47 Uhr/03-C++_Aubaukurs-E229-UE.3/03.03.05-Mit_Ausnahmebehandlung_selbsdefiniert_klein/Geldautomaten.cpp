// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung

#include <iostream>
#include "Geldautomaten.hpp"
#include "Ausnahmefallbehandlung.hpp"

Geldautomaten::Geldautomaten()
{ std::cout << "*****Neuer Geldautomat ist erstellt!*****\n\n" << std::endl;  }
Geldautomaten::~Geldautomaten()
{ ; }

void Geldautomaten::Eingabe()
{
	if(std::cin.fail())
	{
		std::cerr << "\n**** Ausnahme 3 wurde hervorgerufen! ****" << std::endl ;
		std::cin.clear();
		throw Ausnahmefallbehandlung(AUSNAHME_C);	// * Selbstdefinierter Rueckgabewert;
	}
}

void Geldautomaten::NetzAnbindung(int na_id)
{	
	// * Koennte auch Ausnahmefallbehandlung eingearbeitet werden... 
	std::cout << "Geldautomat " << na_id << " ist ans Netz gebunden worden." << std::endl; 
}

void Geldautomaten::UeberpruefungAnbindug(int u_evaluation, int u_id)
{ 
	if(u_evaluation>=0 && u_evaluation<=9)
	{
		switch(u_evaluation)
		{	
			case 0:
				std::cout << "Hopla! Etwas ist schief gegangen... "
						  << "Haben Sie den richtigen Kabel angebunden?" << std::endl;
			break;
			case 1:
				std::cout << "Anbindung war erfolgreich." << std::endl;
			break;
			case 2:
				std::cout << "Entweder Serie ("<< u_id << ") ist"
						  << " falsch zugewiesen worden oder..." << std::endl;
			case 3:
				std::cout << "Password wurde falsch eingegeben." << std::endl;
			break;
			default:
				std::cout << "\n**** Ausnahme 1 wurde hervorgerufen fuer"
						  << " Automaten Id : "<< u_id << "! *******" << std::endl;
				throw Ausnahmefallbehandlung(AUSNAHME_A);	// * Selbstdefinierter Rueckgabewert
		}
	}
	else
	{	
		std::cout << "\n**** Ausnahme 2 wurde hervorgerufen fuer Automaten Id : "
			  	  << u_id << "! *******" << std::endl;
		throw Ausnahmefallbehandlung(AUSNAHME_B); 	// * Selbstdefinierter Rueckgabewert
	}
}

void Geldautomaten::NetzTrennung(int id)
{	
		std::cout << "Geldautomaten Id. " << id << " wurde vom Netz getrennt... "
				  << "Reparaturarbeiten werden erledigt." << std::endl; 
}

void Geldautomaten::AktionAnbindung(int aa_evaluation, int aa_id)
{
    if(aa_evaluation==0||aa_evaluation==2||aa_evaluation==3)
    {    
		std::cout << "Eingabe: \"Anbindung erzwingen\" = 1 " << std::endl;
		std::cout << "Eingabe Trennung = 2" << std::endl;
		int selec;
		std::cout << "Eingabewert: > ";
		std::cin >> selec;

		switch(selec)
		{
			case 1:
			NetzAnbindung(aa_id);
			break;
			case 2:
			NetzTrennung(aa_id);
			break;
		}
    }
    else if(aa_evaluation>3)
    {
		std::cout << "Verbinding bleibt mit Wahrnung bestehn...!" << std::endl;    
    }
	else 
    {   std::cout << "Verbinding bleibt erfolgreich bestehn..." << std::endl; }
}

void Geldautomaten::SystemAnbindungsProzess(int sa_id, int sa_evaluation)
{
	 NetzAnbindung(sa_id);	
	 UeberpruefungAnbindug(sa_evaluation, sa_id);
	 AktionAnbindung(sa_evaluation, sa_id);
}



void Geldautomaten::SystemAnbindungsProzess_public(int sa_id, int sa_evaluation)
{
	SystemAnbindungsProzess(sa_id, sa_evaluation);
}
