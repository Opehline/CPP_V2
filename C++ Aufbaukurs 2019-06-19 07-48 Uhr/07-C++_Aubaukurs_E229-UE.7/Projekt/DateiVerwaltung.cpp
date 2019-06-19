// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.01.07 C++ Programmierung
// * Datei schreiben (Klasse)

#include "DateiVerwaltung.hpp"

Zeit::Zeit()
{ 
	t = time(0);
	dt = ctime(&t);
	std::cout << "Zeit ist auf \"Heute\" eingestellt..." << std::endl;
}


DateiVerwaltung::DateiVerwaltung()
{
	std::cout << "Dateien werden geoeffnet..." << std::endl;
	normalLog.open("ablaufDatei.txt", std::fstream::app);
	errorLog.open("errorDatei.txt", std::fstream::app);
	// * Sekunden werden umgerechnet auf "Heute":
	t = time(0);
	dt = ctime(&t);
}

DateiVerwaltung::~DateiVerwaltung()
{
	std::cout << "Dateien werden geschlossen..." << std::endl;
	normalLog.close();
	errorLog.close();
}

void DateiVerwaltung::ablaufNormal()
{
	pruefung->ueberPruefungOeffnenDatei(normalLog);
	
	std::cerr.rdbuf(normalLog.rdbuf()); // * Umleiten von cerr in eine Datei
	std::cerr << dt <<" " << "\n" << ":-D Erfolgreich alloquiert...! " << std::endl;
	std::cerr <<"....................................................\n\n";
}

void DateiVerwaltung::ablaufFehler(std::bad_alloc& badAlloc)
{
	pruefung->ueberPruefungOeffnenDatei(errorLog);
	
	std::cerr.rdbuf(errorLog.rdbuf()); 		// * Umleiten von cerr in eine Datei
	std::cerr << dt << "\n" << ":-( Oh... Es gibt Probleme beim alloquieren... " << std::endl;
	std::cerr << ":-{ Programm wurde abgebrochen ..." << std::endl;
  	std::cerr <<"....................................................\n\n";
}

