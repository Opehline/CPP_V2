// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.01.05 C++ Programmierung
//   Datei schreiben

#include <iostream>
#include <fstream>


using namespace std;

int main(){

    ofstream mein_dataFile("data.txt");

    if(mein_dataFile.fail())
	{
		cerr << "Schade.... Output-Datei kann nicht geoeffnet werden.";
		exit(1);
    }

    bool done=true;
    double value=0;

    while(done)
	{
		cout << "Bitte Wert Eingeben. '-1' zum abrechen." << endl;
		cin >> value;
		mein_dataFile << value;

		if(value==-1)
		{
			done=false;
		}
    }

    mein_dataFile.close();

exit(0);
}

