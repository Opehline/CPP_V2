// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.01.02 C++ Programmierung
//   Basis

#include <fstream>

//using namespace std;

int main()
{

	// * Wir erstellen ein Objekt mein_dataFile der Klasse ofstream.
    std::ofstream mein_dataFile;
	// * Unser Objekt mein_dataFile ruft die Funktion open() der Klasse ofstream
    mein_dataFile.open("data.txt", std::fstream::app); // * app legt den curser ans Ende der Datei

	// * Wie cout, kann auch ein Objekt einen stream (Datenfluss) verursachen
    mein_dataFile << "Oh! Mein zweiter Text in eine Datei!" << std::endl;

	// * Datei wird geschlossen
	mein_dataFile.close();

return 0;
}

