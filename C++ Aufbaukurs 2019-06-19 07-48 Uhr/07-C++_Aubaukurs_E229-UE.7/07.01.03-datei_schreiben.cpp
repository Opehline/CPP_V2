// Gisela Neira
// C++ Aufbaukurs E229
// * Datei schreiben 08.01.03 C++ Programmierung

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


int main(){

    std::ofstream mein_dataFile("data.txt");

    // Funktion zum ueberpruefen ob das oeffnen der Datei gut oder schief gelaufen ist.
    if(mein_dataFile.is_open())
	{
		std::cout << "Juhu! Die Datei wurde erfolgreich geoeffnet." << std::endl;
    }
	else
	{
		std::cerr << "Na huch... etwas ging schief..." << std::endl;
    }

    mein_dataFile << "Ein weiterer Text in meiner Datei...";

    mein_dataFile.close();

return 0;
}
