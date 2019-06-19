// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.01.01 C++ Programmierung
// * Basis

#include <fstream>
//#include <ofstream>
#include <iostream>

int main()
{
	// * Wir erstellen ein Objekt mein_dataFile der Klasse ofstream.
    std::ofstream mein_dataFile;
	// * Unser Objekt mein_dataFile ruft die Funktion open() der Klasse ofstream
    //mein_dataFile.open("data.txt");
    mein_dataFile.open("data.txt", std::fstream::app); // * app legt den curser ans Ende der Datei

	// * Wie cout, kann auch ein Objekt einen stream (Datenfluss) verursachen
    mein_dataFile << "Oh! Upssss!" << std::endl;
    mein_dataFile << "Oh! Ahhh!" << std::endl;
    mein_dataFile << "Oh! Ufffff!" << std::endl;
    //mein_dataFile << "Oh! Pffffffff!" << std::endl;
	std::cout << "Hallo"; /* Warum Fehler*/

	// * Datei wird geschlossen
	mein_dataFile.close();

return 0;
}

