// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.04.02 C++ Programmierung
// * Datei Umbennen

#include <iostream>
#include <fstream>
#include <cstdlib>

 
using namespace std;
 
int main(){

	ifstream mein_dataFile("data.txt");
	mein_dataFile.close();	
	
	// * rename("alter Name", "neuer Name")
	int eval=rename("data.txt", "data01.txt"); // * 0 = Erfolg; -1=Nicht 0 ist kein Erfolg
	// * Dateiinhalt wird gelöscht
    cout << eval << endl;

exit(0);
}

