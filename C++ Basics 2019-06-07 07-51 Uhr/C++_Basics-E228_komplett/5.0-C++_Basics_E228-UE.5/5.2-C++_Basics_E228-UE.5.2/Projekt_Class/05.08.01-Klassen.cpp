#include "05.08.01-Header.hpp"
#include "05.08.01-Klassen.hpp"

void ElternKlasse::eineFunktion()
{
	std::cout << "Was tue ich hier?" << std::endl;
}

void KindKlasse::Ausgabe()
{
	alter=49;
	//meinText={"Ich bin eine private Variable der Elternklasse die an die Kindklasse NICHT vererbt wird."};
	
	std::cout << "****Ich bin " << alter << " Jahre jung!****\n" << std::endl;
	std::cout << "Ich bin eine KindKlasse, erbe von meiner ElternKlasse " 
			  << "die Variable des Alter!" << std::endl;
	std::cout << "Ohhh! Wir sparen Schreibarbeit!" << std::endl;
	
	//std::cout << meinText << std::endl;
}
