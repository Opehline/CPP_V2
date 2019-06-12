// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.02.02 der C++ Programmierung
// * Normale virtuelle Funktionen: eine zum Ein- und Auskommentieren
// * Mit Kontrollstrukturen und Parameteruebergabe

#include <iostream>

class Geldautomaten 
{
	protected:
		int GAid_nr;
		int MengeScheine;

		// * Methoden die das Objekt in Bewegung setzen
		void NetzAnbindung()
		{ 
			std::cout 	<< "Geldautomat mit Id-Nr.: "<< GAid_nr 
						<<  " ist ans Netz gebunden worden." << std::endl;
		}
	
		// * Ein und Auskommentieren:
		//void ErfolgAnbindug(int x)
		virtual void ErfolgAnbindug(int x)
		{ 
			switch(x)
			{
				case 0:
					std::cout << "Hopla! Etwas ist schief gegangen... "
							  << "Haben Sie den richtigen Kabel angebunden?" 
							  << std::endl;
				break;
				case 1:
					std::cout << "Anbindung war erfolgreich." 
						      << std::endl;
				break;
				default:
					std::cout << "Na huch---? Nun aber... "
							  << "da habe ich keine Ahnung." 
							  << std::endl;
			}
		}

		void NetzTrennung()
		{
			std::cout << "Geldautomat mit Id-Nr.: "<< GAid_nr 
					  <<  " ist vom Netz getrennt worden." 
					  << std::endl;
		}

		void SystemAnbindungsProzess(int x)
		{
			NetzAnbindung();
			ErfolgAnbindug(x);
			if(x==0)
			{    
				NetzTrennung();
			}
			else 
			{ 
				std::cout 	<< "Verbinding bleibt erfolgreich bestehn..." 
							<< std::endl;
			}
		}

	public:
		// * Konstruktor der unser Objekt bereit stellt (initialisiert).
		Geldautomaten() 
		{
			GAid_nr = 1249;
			MengeScheine = 1400;
			std::cout << "Neuer Geldautomat ist erstellt!" << std::endl;
		}

		void public_SystemAnbindungsProzess(int x)
		{
			SystemAnbindungsProzess(x);
		}
};

class Geldautomaten_mitFingerprintidentification : public Geldautomaten
{
    private:
	    void ErfolgAnbindug(int x)
	    {
			switch(x)
			{
				case 0:
					std::cout << "Hopla! Etwas ist schief gegangen... "
							  << "Haben Sie den richtigen Kabel angebunden?" 
							  << std::endl;
				break;
				case 1:
					std::cout << "Anbindung war erfolgreich." << std::endl;
				break;
				case 2:
					std::cout << "Password-ID ist falsch zugewiesen "
							  << "worden oder..." 
							  << std::endl;
				case 3:
					std::cout << "Password wurde falsch eingegeben." 
							  << std::endl;
					break;
				default:
					std::cout << "Nun aber habe ich keine Ahnung." 
						      << std::endl;
			}
	    }
	public:
		Geldautomaten_mitFingerprintidentification(){;}
};


int main()
{
	/*
    std::cout << "Geldautomat b1" << std::endl;
    Geldautomaten b1;
    b1.public_SystemAnbindungsProzess(0);
  
    std::cout << std::endl; // "\n"
*/
    std::cout << "Geldautomat s1" << std::endl;
    Geldautomaten_mitFingerprintidentification s1;
    s1.public_SystemAnbindungsProzess(2);
  
    std::cout << std::endl;

    std::cout << "Geldautomat s2" << std::endl;
    Geldautomaten_mitFingerprintidentification s2;
    s2.public_SystemAnbindungsProzess(3);

    return 0;
}
