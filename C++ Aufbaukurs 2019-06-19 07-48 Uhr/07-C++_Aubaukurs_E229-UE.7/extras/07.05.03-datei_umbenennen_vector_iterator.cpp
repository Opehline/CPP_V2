// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.05.03 C++ Programmierung
// * Datei umbenennen in Vector-Version
// * Uebergabe an Funktionen durch iterator

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

 
int main()
{
	std::string NameDatei="data01.txt";

	std::vector<char> alterName(NameDatei.begin(), NameDatei.end());
	alterName.push_back('\0');
	std::vector<char> neuerName(alterName.begin(), alterName.end());

	std::vector<char>::iterator it_aN=alterName.begin();
	std::vector<char>::iterator it_nN=neuerName.begin();

	// * Wir uebergeben iterator an Funktion die Pointer verlangt
	std::ofstream mein_dataFile(&*it_aN);
	mein_dataFile.close();

	neuerName.at(5)=alterName.at(5)+1;

	// * Wir uebergeben iterator an Funktion die Pointer verlangt
	
	rename(&*it_aN, &*it_nN);
	
exit(0);
}

