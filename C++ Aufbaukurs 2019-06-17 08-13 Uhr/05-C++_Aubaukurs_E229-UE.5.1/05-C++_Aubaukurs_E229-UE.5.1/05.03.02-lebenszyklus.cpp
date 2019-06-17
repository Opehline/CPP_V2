// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.03.02 der C++ Programmierung
//   Softwareteschnicher Lebenszyklus eines Ojekts
//   Fall 1: innerhalb der main-Funktionsschleifen


#include <iostream>
#include <string>
#include <stdio.h>

class Hund
{
    private:
		std::string HundArt;
    public:
		Hund(std::string _HundArt)
		{
		    HundArt = _HundArt;
		    std::cout << HundArt << " ist geboren." << std::endl << "\n";
		}

		std::string getHundArt()
		{
		    return HundArt;
		}

		~Hund()
		{
		    std::cout << HundArt << " ist gestorben..." << std::endl;
		    getchar();
		}
};

int main()
{
    Hund tuki("Poodle");
    Hund ohneName("Lycaon pictus");
    Hund futo("matematischer Stassenkoeter");

    std::cout << tuki.getHundArt() << " sagt: ich lebe!"  << std::endl;
    std::cout << futo.getHundArt()  << " sagt: ich lebe!" << std::endl;
    std::cout << ohneName.getHundArt() << " sagt: ich lebe!" << std::endl;

    // * Hier wird bescheid gegeben wo die main-Funktion endet
    std::cout << "\n";
    std::cout << "****Ende von main-Funktion!****" << std::endl;
getchar();
}
