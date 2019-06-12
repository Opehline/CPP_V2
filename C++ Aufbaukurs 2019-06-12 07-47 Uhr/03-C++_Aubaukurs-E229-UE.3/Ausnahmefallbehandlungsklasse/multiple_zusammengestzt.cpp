#include "Ausnahmefallbehandlung.hpp"
#include "multiple_zusammengestzt.hpp"

void alterEingeben()
{
	std::cout << "Alter eingeben: \n";
	int age = 0;
	std::cin>>age;

	try
	{
		//wertEingeben(); 		// * Welches catch?
		if(age>150 || age<0)
		{
			//std::cin>>age; 	// * Versuch Wert zu ueberschreiben.
			throw Ausnahmefallbehandlung(AUSNAHME_A);	// * Selbstdefinierter Rueckgabewert
		}
		if(std::cin.fail())
		{
			throw Ausnahmefallbehandlung(AUSNAHME_B);	// * Selbstdefinierter Rueckgabewert
		}
	}
	catch(Ausnahmefallbehandlung a)
	{
		switch(a.get_grund())
		{
			//Ausnahmefallbehandlung::grund=65; 		// * Versuch Wert zu ueberschreiben.
			case AUSNAHME_A:
				std::cout << "Es wurde ein Wert ausserhalb des erlaubten Bereichs eingegeben." << std::endl;
				break;
			case AUSNAHME_B:
				std::cout << "Kein gueltiger Eingabewert." << std::endl;
				break;
		}
	}
}

void wertEingeben()
{
	int val=0;

	std::cout <<"\nWert eingeben: ";
	std::cin>>val;
	std::cin.clear();

	if(std::cin.fail())
	{
		throw Ausnahmefallbehandlung(AUSNAHME_B);	// * Selbstdefinierter Rueckgabewert
	}
	if(val<0)
	{
		throw Ausnahmefallbehandlung(AUSNAHME_A);	// * Selbstdefinierter Rueckgabewert
	}
	//else {throw Ausnahmefallbehandlung(AUSNAHME_C); }
}

