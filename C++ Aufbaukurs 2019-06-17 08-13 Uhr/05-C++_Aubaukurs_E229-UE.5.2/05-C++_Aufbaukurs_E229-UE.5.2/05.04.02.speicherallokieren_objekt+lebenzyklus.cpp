// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.04.03 der C++ Programmierung
// * Speicherallokierung eines Objekts
// * Lebenszyklus

#include <iostream>
#include <string>

class Hund
{
    private:
		std::string HundArt;

    public:
		Hund(){};
		Hund(std::string _HundArt)
		{
		    HundArt =_HundArt;
		    std::cout << HundArt << " ist geboren!" << std::endl;
		}

		~Hund(){ getchar(); std::cout << HundArt << " ist gestorben..." << std::endl; 	}

		std::string getHundArt()
		{
		    return HundArt;
		}
};

int main()
{
	{		// * Hier wurde Heapspeicher allokiert:
		Hund* p_tuki = new Hund("Poodle");
	    Hund* p_ohneName = new Hund("Lycaon pictus");
	    Hund* p_futo = new Hund("matematischer Stassenkoeter");

	    std::cout << "\n";

	    std::cout << (*p_tuki).getHundArt() << " sagt ich Lebe!" << std::endl; 	// * Dereferenzierungsschreibweise
	    std::cout << p_futo->getHundArt() << " sagt ich Lebe!"<< std::endl;		// * Indirektzugriff-schreibweise
	    std::cout << p_ohneName->getHundArt() << " sagt ich Lebe!"<< std::endl;

		std::cout << "\n";

		#if 1
        delete p_tuki;		// * Hier wird automatisch p_tuki->~Hund()		aufgerufen
        delete p_ohneName;	// * Hier wird automatisch p_ohneName->~Hund()	aufgerufen
        delete p_futo;		// * Hier wird automatisch p_futo->~Hund()		aufgerufen
		#endif

		#if 0
        // * Fuehrt zu Fehlern
        //p_tuki->~Hund();
        //std::cout << "Ausgabe: " << p_tuki->getHundArt() << std::endl;
        std::cout << (*p_tuki).getHundArt() << " sagt ich Lebe noch !" << std::endl; 	// * Dereferenzierungsschreibweise
        std::cout << p_futo->getHundArt() << " sagt ich Lebe noch !"<< std::endl;		// * Indirektzugriff-schreibweise
        std::cout << p_ohneName->getHundArt() << " sagt ich Lebe noch!"<< std::endl;
	    #endif

	    // * Hier wird bescheid gegeben wo die code-Schleifen enden
		std::cout << "\n";
		getchar();
		std::cout << "****Ende von Code!****" << std::endl;
	}

	// * Hier wird bescheid gegeben wo die main-Funktion endet
	//std::cout << (*p_tuki).getHundArt() << " sagt ich Lebe noch !" << std::endl; 	// * Dereferenzierungsschreibweise
    std::cout << "\n";
    std::cout << "****Ende von main-Funktion!****" << std::endl;
	getchar();
return 0;
}
