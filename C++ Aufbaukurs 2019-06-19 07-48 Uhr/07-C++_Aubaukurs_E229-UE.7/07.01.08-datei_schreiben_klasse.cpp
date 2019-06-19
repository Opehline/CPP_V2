// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.01.08 C++ Programmierung
// * Datei schreiben (Klasse)

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

class DateiVerwaltung
{
	private:
		std::string meinFile;
		std::ofstream mein_dataFile;

	public:

		DateiVerwaltung(std::string File) : meinFile(File)
		{
			std::cout << "Datei wird erstellt..." << std::endl;
			mein_dataFile.open(meinFile.c_str(), std::ios::in);
		}

		// * Eigentlich: in einer Ausnahmefallbehandlungsklasse
		int failOeffnen()
		{
			if(mein_dataFile.fail())
			{
				std::cerr << "Schade... Output-Datei kann nicht geoeffnet werden. :-(";
				exit(1);
			}
		}

		int dateiFuellen()
		{
			;
		}

		// * Eigentlich: in einer Ausnahmefallbehandlungsklasse
		void istDateiOffen()
		{
			if(mein_dataFile.is_open())
			{	std::cerr << "Hopla...! Datei ist noch offen...";	}
			else
			{	std::cout << "Jupi! Datei ist geschlossen...! :-)\n";  }
		}

		~DateiVerwaltung()
		{
			std::cout << "Datei wird geschlossen..." << std::endl;
			mein_dataFile.close();
		}
};


int main()
{
	DateiVerwaltung df1("data.txt");

//exit(0); // * Hier wird der Destruktor nicht aufgerufen.
return 0;
}

