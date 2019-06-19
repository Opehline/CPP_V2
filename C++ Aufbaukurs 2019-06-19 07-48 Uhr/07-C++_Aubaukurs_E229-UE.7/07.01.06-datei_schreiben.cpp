// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.01.06 C++ Programmierung
//   Datei schreiben

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

    ofstream mein_dataFile("data.txt");

    if(mein_dataFile.fail())
	{
		cerr << "Schade... Output-Datei kann nicht geoeffnet werden :-(.";
		exit(1);
    }

    bool done=false;

    while(!done)
	{
		double value=0;
		cout << "Bitte Wert Eingeben. '-1' zum abrechen." << endl;
		cin >> value;

		if(value==-1)
		{
			done=true;
		}
		else
		{
			mein_dataFile << value << endl; // * 	"\n"
		}
    }

    mein_dataFile.close();

exit(0);
}

