// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.03.03 der C++ Programmierung
//   Softwareteschnicher Lebenszyklus eines Ojekts
//   Fall 2: innerhalb selbstgelegter Code-Schleifen


#include <iostream>
#include <string>
#include <stdio.h>

#define ALLETOT

class Hund
{
    private:
		std::string HundArt;

    public:
		Hund(){};
		Hund(std::string _HundArt)
		{
		    HundArt = _HundArt;
		    std::cout << HundArt << " ist geboren." << std::endl << "\n";
		}

		std::string getHundArt()
		{
		    return HundArt;
		}

		#ifdef ALLETOT
		~Hund()
		{
		    std::cout << HundArt << " ist gestorben..." << std::endl;
		    getchar();
		}
		#endif
};

int main()
{
	{
		Hund tuki("Poodle");
		Hund ohneName("Lycaon pictus");
		Hund futo("matematischer Stassenkoeter");

		/*
			tuki.Hund();
			ohneName.Hund();
			futo.Hund();
			taka.Hund();
		*/

		std::cout << tuki.getHundArt() << " sagt: ich lebe!"  << std::endl;
		std::cout << ohneName.getHundArt() << " sagt: ich lebe!" << std::endl;
		std::cout << futo.getHundArt()  << " sagt: ich lebe!" << std::endl;

		//tuki.~Hund();
		//ohneName.~Hund();
		//futo.~Hund();

		// * Hier wird bescheid gegeben wo die code-Schleifen enden
		std::cout << "\n";
		std::cout << "****Ende von Lebenszyklus!****" << std::endl;
	}


    // * Hier wird bescheid gegeben wo die main-Funktion endet
    std::cout << "\n";
    std::cout << "****Ende von main-Funktion!****" << std::endl;
	getchar();
}
