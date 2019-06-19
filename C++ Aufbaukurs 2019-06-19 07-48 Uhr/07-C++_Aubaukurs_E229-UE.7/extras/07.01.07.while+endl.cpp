// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.01.08 C++ Programmierung
// * While und warum endl?

#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
	std::ofstream mein_dataFile("SpielKampf.txt");

	std::string nameHeld;
	int wappen; 				// * 1 = gelber Wappen mit Schwert,  2 = roter Wappen mit Drachen...
	std::string dorfHeld;

	std::cout << "Gebe den Namen des Helden, seines Wappens, und seines Dorfes ein!" << std::endl;

	while(std::cin >> nameHeld >> wappen >> dorfHeld)
	{
		// * Welche Zeile funktioniert und warum?
		mein_dataFile << nameHeld << ' ' << wappen << ' '  << dorfHeld << std::endl;
		mein_dataFile << nameHeld << ' ' << wappen << ' '  << dorfHeld << "\n";
	}
	mein_dataFile.close();

exit(0);
}

