// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.02.01 der C++ Programmierung
// * Programm ohne virtuelle Funktionen

#include <iostream>

class Geldautomaten 
{
	protected:
		int GAid_nr;
		int MengeScheine;

		// * Methoden die das Objekt in Bewegung setzen
		void NetzAnbindung()
		{ 
			std::cout 	<< "Geldautomat mit Id-Nr.: "
						<< GAid_nr <<  " ist ans Netz gebunden worden." 
						<< std::endl;
		}
	
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
				std::cout << "Verbinding bleibt erfolgreich bestehn..." 
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
    public:

		int pwid_nr;

		Geldautomaten_mitFingerprintidentification() {pwid_nr = 14345;}
		void ErfolgAnbindug(int x)
		{ 
			//int x=1;
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
				std::cout << "Password-ID ist falsch zugewiesen  worden oder..." 
						  << std::endl;
			case 3:
				std::cout << "Password wurde falsch eingegeben." << std::endl;
			default:
				std::cout << "Nun aber habe ich keine Ahnung." << std::endl;
			}
		}
};


int main()
{
/*    
	std::cout << "Geldautomat b1" << std::endl;
    Geldautomaten b1;
    b1.public_SystemAnbindungsProzess(0);
	std::cout << "\n";
*/

    std::cout << "Geldautomat s1" << std::endl;
    Geldautomaten_mitFingerprintidentification s1;
    s1.public_SystemAnbindungsProzess(2);
	std::cout << "\n";
	
    std::cout << "Geldautomat s2" << std::endl;
    Geldautomaten_mitFingerprintidentification s2;
    s2.public_SystemAnbindungsProzess(3);

    return 0;
}
