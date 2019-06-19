// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.04.01 C++ Programmierung
//   Datei loeschen

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

 
using namespace std;
 
int main()
{
	ifstream mein_dataFile("data.txt");

	mein_dataFile.close();

	remove("data.txt"); // * Datei wird geloescht    
	
exit(0);
}

