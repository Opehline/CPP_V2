#include "Ausnahmefallbehandlung.hpp"

Ausnahmefallbehandlung::Ausnahmefallbehandlung(){ }
		
void Ausnahmefallbehandlung::ueberPruefungOeffnenDatei(std::ofstream& datei)
{
	if(datei.is_open())
	{	std::cout << ":-D Juhu! Die Datei wurde erfolgreich geoeffnet." << std::endl;    } 
	else
	{	std::cerr << ":-O Na huch?... etwas ging schief..." << std::endl;		    }
}

int Ausnahmefallbehandlung::abfrageSpeicher()
{
	try
	{	// * Ein- und Auskommentieren:
		//a = new long double[10000];		  				
		a = new long double[100000000000];
		datei.ablaufNormal();
	}
  	catch(std::bad_alloc& badAlloc)
	{
	  	datei.ablaufFehler(badAlloc);
	  	std::cout << "Ops! Ein Alloquierfehler ist aufgetreten. " 
		  		  << "\nProgramm wird leider abgebrochen..." << std::endl;
		return 1;
	  	//exit(0);
	}
}

Ausnahmefallbehandlung::~Ausnahmefallbehandlung(){	delete a;	}
