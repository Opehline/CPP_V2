// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung

#include <iostream>
#include "Geldautomaten.hpp"
#include "Ausnahmefallbehandlung.hpp"

int Geldautomaten::Eingabe(int eingabeWert)
{
	if(!eingabeWert)
	{
		std::cout << "\n************** Ausnahme 3 wurde hervorgerufen! "
					  << "**************" << std::endl ;
			std::cin.clear();
			throw Ausnahmefallbehandlung(AUSNAHME_C);
	}
	else return eingabeWert;
}

void Geldautomaten::NetzAnbindung(int na_id)
{
	// * Koennte auch Ausnahmefallbehandlung eingearbeitet werden...
	std::cout << "\nGeldautomat " << na_id
		 	  << " ist ans Netz gebunden worden." << std::endl;
}

void Geldautomaten::UeberpruefungAnbindug(int u_evaluation, int u_id)
{
	if(u_evaluation>0 && u_evaluation<=9)
	{
		switch(u_evaluation)
		{
			case 1:
				std::cout << "\nAnbindung war erfolgreich." << std::endl;
			break;
			case 2:
				std::cout << "\nHopla! Etwas ist schief gegangen... "
						  << "Haben Sie den richtigen Kabel angebunden?"
						  << std::endl;
			break;
			case 3:
				std::cout << "\nEntweder Serie ("
						  << u_id
						  << ") ist falsch zugewiesen worden oder..."
						  << std::endl;
			case 4:
				std::cout << "\nPassword wurde falsch eingegeben." << std::endl;
			break;
			case 5:
				std::cout << "\nDas Programm wurde abgebrochen."
						  << "\nNa dann bis bald!\n" << std::endl;
				exit(0);
			default:
				std::cout << "\n************** Ausnahme 1 "
						  << "wurde hervorgerufen fuer Automaten Id : "
						  << u_id << "! **************" << std::endl;
				throw Ausnahmefallbehandlung(AUSNAHME_A);
		}
	}
	else
	{
		std::cout << "\n************** Ausnahme 2 wurde hervorgerufen "
				  << "fuer Automaten Id : "
				  << u_id
				  << "! **************"
				  << std::endl;
		throw Ausnahmefallbehandlung(AUSNAHME_B);
	}
}

void Geldautomaten::NetzTrennung(int id)
{
	std::cout << "-------------------------------------------------------------\n"
			  << "\tGeldautomaten Id. "
			  << id
			  << " wurde vom Netz getrennt... \n"
			  << "\tReparaturarbeiten werden erledigt.\n"
			  << "-------------------------------------------------------------\n"
			  << std::endl;
}

void Geldautomaten::AktionAnbindung(int aa_evaluation, int aa_id)
{
    if(aa_evaluation==0||aa_evaluation==2||aa_evaluation==3)
    {
		std::cout << "\nEingabe: \"Anbindung erzwingen\" = 1 " << std::endl;
		std::cout << "\nEingabe \"Trennung\" = 2" << std::endl;
		std::cout << "\nAlle anderen Ziffern fueren zum Programmexit..." << std::endl;

		std::cout << "\nEingabewert: > ";

		std::cin.ignore();
		std::cin >> selec;
		std::cin.clear();

		Ausnahmefallbehandlung switchAusnahme;
		selec=switchAusnahme.evalfEingabe();

		Eingabe(selec);
		switch(selec)
		{
			case 1:
				NetzAnbindung(aa_id);
				break;
			case 2:
				NetzTrennung(aa_id);
				break;
			default:
				std::cout << "\nProgramm wird abgebrochen."
						  << "Na dann bis bald! \n" << std::endl;
				exit(0);
		}
    }
    else if(aa_evaluation>3)
    {
		std::cout << "\nVerbinding bleibt mit Wahrnung bestehn...!\n" << std::endl;
    }
	else
    {
		std::cout << "\n********** Verbinding bleibt "
				  <<"erfolgreich bestehn...**********\n"
				  << std::endl;
	}
}

void Geldautomaten::SystemAnbindungsProzess(int sa_id, int sa_evaluation)
{
	if(sa_evaluation>=OPTIONEN||sa_evaluation<0)
		{UeberpruefungAnbindug(sa_evaluation, sa_id);}
	else
	{
		NetzAnbindung(sa_id);
		UeberpruefungAnbindug(sa_evaluation, sa_id);
		AktionAnbindung(sa_evaluation, sa_id);
	}
}

void Geldautomaten::SystemAnbindungsProzess_public(int sa_id, int sa_evaluation)
{
	SystemAnbindungsProzess(sa_id, sa_evaluation);
}

