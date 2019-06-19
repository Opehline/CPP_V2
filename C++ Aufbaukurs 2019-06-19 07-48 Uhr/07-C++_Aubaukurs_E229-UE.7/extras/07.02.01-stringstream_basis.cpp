// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.02.01 C++ Programmierung
// * Stringstream Basiselemente

#include <iostream>
#include <fstream>
#include <sstream>

#define MAX 11
 
int main()
{

	std::string einString;
	
	// * Ein stringstream legt mehrere Texte beliebig zusammen.	
	std::stringstream einStringStream;
	
	std::cout << "Ein Text eingeben > ";
	std::cin>> einString;
	std::cout << "\n";
	einStringStream << 12345 << " " << "Die Fee ist fabelhaft... " << '0' << " " << einString << std::endl;
	
	std::cout << einStringStream.str();

	einStringStream.clear();
	einStringStream.str("");
	std::cout << "Stringstream wurde geloescht! Hier wird nicht mehr ausgegeben.\n" << std::endl;
	std::cout << einStringStream.str();
	std::cout << "Stringstream wird neu gefuellt." << std::endl;
	einStringStream << "Ein neuer Text" << std::endl;
	std::cout << einStringStream.str();

exit(0);
}

