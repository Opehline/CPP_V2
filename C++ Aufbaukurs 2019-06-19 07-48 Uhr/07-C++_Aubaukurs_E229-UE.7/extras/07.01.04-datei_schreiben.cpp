// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.01.04 C++ Programmierung
//   Datei schreiben

#include <iostream>
#include <fstream>
#include <stdlib.h> // * Fuer exit und rand

using namespace std;

int main(){

    ofstream mein_dataFile("data.txt");

    if(mein_dataFile.fail())
	{
		cerr << "Schade.... Output-Datei kann nicht geoeffnet werden.";
		exit(1);
    }

	double value=0;

	for(int i=0;  i<10; i++)
	{
		value = rand();
		mein_dataFile << value << endl;
	}

    mein_dataFile.close();

exit(0);
}

