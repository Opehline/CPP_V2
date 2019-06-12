// Gisela Neira
// C++ Aufbaukurs E229
// * Ausnahmefallbehandlug 03.01.05 der C++ Programmierung
// * Werfen eines Objekts

#include <iostream>

class Daten
{
	public:
		void Ausgabe(std::string* Benutzername)
		{
			std::cout << "Benutzer > " << *Benutzername << " hat einen Wert eingegeben"<< std::endl;
		}
};

int main()
{
	int eingabe=0;
	std::string name="";
	Daten benutzerHeinz;

		try
		{
			std::cout << "Benutzername eingeben: >";
			std::cin>> name;
			std::cout << "Benutzercode eingeben: >";
			std::cin.ignore();
			std::cin>>eingabe;

			if(std::cin.fail())
			{
				std::cin.clear();
				std::cout<<"\n*****AUSNAHMEFALL WURDE HERVORGERUFEN!****\n" << std::endl;
				throw benutzerHeinz; 	// * Es wird ein Objekt geworfen (in diesem Fall als Referenz)
				//throw &benutzerHeinz;
			}
			else
			{
				std::cout << "Eingebe erfolgreich." << std::endl;
			}
		}
		//catch(Daten value)
		catch(Daten& value)				// * Objekt (eigentlich die Referenz) wird "gecatcht"
		//catch(Daten *value)
		{ 								// * So aehnlich koennen auch andere Datenstrukturen geworfen werden.
			value.Ausgabe(&name);
			//value->Ausgabe(&name);
		}

return 0;
}
