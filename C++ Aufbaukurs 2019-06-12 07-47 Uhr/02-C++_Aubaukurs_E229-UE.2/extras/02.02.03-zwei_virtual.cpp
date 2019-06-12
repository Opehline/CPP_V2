// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.02.03 der C++ Programmierung
// * Normale virtuelle Funktionen: zwei
// * Mit Kontrollstrukturen und Parameteruebergabe

#include <iostream>

#undef ELTERNKLASSE

class Geldautomaten 
{
	protected:
		int GAid_nr;
		int MengeScheine;

		// * Methoden die das Objekt in Bewegung setzen
		virtual void NetzAnbindung(int GAid_nr, int MengeScheine)
		{ 
			std::cout << "Geldautomat mit Id-Nr.: "<< GAid_nr 
				 << " und einer Menge von Scheinen von " 
				 << MengeScheine 
				 <<  " ist ans Netz gebunden worden." << std::endl;
		}
	
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
					std::cout << "Anbindung war erfolgreich." << std::endl;
				break;
				default:
					std::cout << "Nun aber habe ich keine Ahnung... "
						 	  << "was zu tun ist.. Soll ich angebunden bleiben?." 
							  << std::endl;
			}
		}
		virtual void Ueberpruefung(int eVal, int id)
		{
			if(eVal==0)
				{ NetzTrennung(id); }
			else 
			{ 
				std::cout << "Verbinding bleibt erfolgreich bestehn..." 
						  << std::endl; 
			}
		}

		virtual void NetzTrennung(int GAid_nr)
		{
			std::cout << "Geldautomat mit Id-Nr.: "<< GAid_nr 
					  <<  " ist vom Netz getrennt worden." 
					  << std::endl;
		}
	 
		virtual void SystemAnbindungsProzess(int x, int y, int z)
		{
			NetzAnbindung(y, z);
			ErfolgAnbindug(x);
			Ueberpruefung(x,y);
		}

	public:	
		// * Konstruktor der unser Objekt bereit stellt (initialisiert).
		Geldautomaten() 
		{ 
			std::cout << "Neuer Geldautomat ist erstellt!" << std::endl;  
		}

		virtual void public_SystemAnbindungsProzess(int x, int y, int z)
		{
			SystemAnbindungsProzess(x, y, z);
		}

};

class Geldautomaten_mitFingerprintidentification : public Geldautomaten
{
    protected:

	    int pwid_nr;
	
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
					std::cout << "Entweder Serie Password-ID ("<< pwid_nr 
							  << ") ist falsch zugewiesen worden oder..." 
							  << std::endl;
				case 3:
					std::cout << "Password wurde falsch eingegeben." << std::endl;
					break;
				default:
					std::cout << "Nun aber habe ich keine Ahnung... was zu tun ist.. "
							  << "Soll ich angebunden bleiben?." 
							  << std::endl;
			}
	    }
	    void Ueberpruefung(int eVal, int id)
	    {
			if(eVal==0||eVal==2||eVal==3)
			{    
				NetzTrennung(id);
			}
			else if(eVal>3)
			{
				std::cout << "Verbinding bleiben mit Wahrnung bestehn...!" 
						  << std::endl;    
			}else 
			{ 
				std::cout << "Verbinding bleibt erfolgreich bestehn..." 
						  << std::endl; 
			}
	    }

	public:
		Geldautomaten_mitFingerprintidentification() {pwid_nr = 14345;}
};


int main()
{
    #ifdef ELTERNKLASSE
    std::cout << "Geldautomat b1" << std::endl;
    Geldautomaten b1;
    b1.public_SystemAnbindungsProzess(0, 11, 1450);
    
    std::cout << std::endl;
    #endif
    
    #ifndef ELTERNKLASSE
    std::cout << "Geldautomat s5" << std::endl;
    Geldautomaten_mitFingerprintidentification s5;
    s5.public_SystemAnbindungsProzess(0, 25, 7140);

    std::cout << std::endl;
    
    std::cout << "Geldautomat s4" << std::endl;
    Geldautomaten_mitFingerprintidentification s4;
    s4.public_SystemAnbindungsProzess(1, 24, 27843);

    std::cout << std::endl;

    std::cout << "Geldautomat s1" << std::endl;
    Geldautomaten_mitFingerprintidentification s1;
    s1.public_SystemAnbindungsProzess(2, 21, 2860);

    std::cout << std::endl;

    std::cout << "Geldautomat s2" << std::endl;
    Geldautomaten_mitFingerprintidentification s2;
    s2.public_SystemAnbindungsProzess(3, 22, 5896);

    std::cout << std::endl;

    std::cout << "Geldautomat s3" << std::endl;
    Geldautomaten_mitFingerprintidentification s3;
    s3.public_SystemAnbindungsProzess(6, 23, 10250);
    #endif

    return 0;
}
