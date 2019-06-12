// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung


#include <iostream>
#include "Geldautomaten.hpp"


Geldautomaten::Geldautomaten()
{ std::cout << "Neuer Geldautomat ist erstellt!"
            << std::endl;  }

void Geldautomaten::NetzAnbindung(int na_id)
{
	std::cout << "Geldautomat " << na_id << " ist ans Netz gebunden "
	 		  << "worden." << std::endl;
}

void Geldautomaten::UeberpruefungAnbindug(int u_evaluation, int u_id)
{
    switch(u_evaluation)
    {
		case 0:
			std::cout << "Hopla! Etwas ist schief gegangen... Haben Sie den "
					  << "richtigen Kabel angebunden?" << std::endl;
			break;
		case 1:
			std::cout << "Anbindung war erfolgreich." << std::endl;
			break;
		case 2:
			std::cout << "Entweder Serie ("<< u_id << ") ist falsch "
					  << "zugewiesen worden oder..." << std::endl;
		case 3:
			std::cout << "Password wurde falsch eingegeben." << std::endl;
			break;
		// * Hier ist der Bereich der fuer die Ausnahmebehandlung wichtig ist:
		default:
			std::cout << "Nun aber habe ich keine Ahnung... was zu tun ist.. "
					  << "Soll ich angebunden bleiben?." << std::endl;
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
			std::cout << "Eingabe: \t<<Anbindung erzwingen = 1>> " << std::endl;
			std::cout << "Eingabe: \t<<Trennung = 2>>" << std::endl;

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
    {
		std::cout << "Verbinding bleibt erfolgreich bestehn..." << std::endl;
	}
}

void Geldautomaten::SystemAnbindungsProzess(int sa_id, int sa_evaluation)
{
	 NetzAnbindung(sa_id);
	 UeberpruefungAnbindug(sa_evaluation, sa_id);
	 AktionAnbindung(sa_evaluation, sa_id);
}

void Geldautomaten::public_SystemAnbindungsProzess(int sa_id, int sa_evaluation)
{	SystemAnbindungsProzess(sa_id, sa_evaluation); }
