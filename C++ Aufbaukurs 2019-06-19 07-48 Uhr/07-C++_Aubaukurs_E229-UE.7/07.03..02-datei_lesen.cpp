// Gisela Neira
// C++ Aufbaukurs E229
// * Datei lesen 08.03.02C++ Programmierung

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){

	// * Ein und auskommentieren
	//ifstream tagebuch("data.txt");
   	ifstream tagebuch("dat.txt"); 		// * Was passiert hier? Auf Zeilen 21 und 22 achten

	ofstream errorLog("errorDatei.txt");	// * Wozu diese Zeile?

    if(tagebuch.fail())
	{
		cerr.rdbuf(errorLog.rdbuf()); 		// * Umleiten von cerr in eine Datei
		cerr << "Ojemine... Etwas ging schief....";
		cout << "Ojemine... Etwas ging schief....";
		tagebuch.close();
		errorLog.close();
		//cerr << "Input-Datei kann nicht geoeffnet werden.";
    }

    std::string value;

	int i=0;
    while(tagebuch>>value)
	{
		cout << "Was habe ich heute alles gemacht?:" << value << endl;
		i++;
    }

    tagebuch.close();
	errorLog.close();
    cout << "Menge der Daten: " << i << endl;

return 0;
}

