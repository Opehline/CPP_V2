// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.05.01 C++ Programmierung
// * Folge von Dateien erstellen

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

#define MAX 11

using namespace std;
 
int main(){

	char alterName[MAX], neuerName[MAX];
	int i=0;
    string value;

	// * Es werden die Dateinamen die in daten.txt gespeichert werden gelesen
	ifstream lesenName("daten.txt");
	
    while(lesenName>>value)
	{
		//cout << "Read:" << value << endl;
    }
	
	// * Der letzte gelesene Wert wird in alterName gespeichert
	strncpy(alterName, value.c_str(), sizeof(alterName));

	// * Der alterName wird auf neu_dataFile umkopiert.
	ifstream mein_dataFile(alterName);
	
	for(i=0; i<11; i++)
	{
		neuerName[i] = alterName[i];
	}
 
	// * Die Position 6 des neuerName wird um ein vermindert.
	neuerName[5]=alterName[5]-1;
	rename(alterName, neuerName);

	// * Es wird eine neue Datei erstellt.
	ofstream neu_dataFile(alterName);
	neuerName[5]=alterName[5]+1;
	rename(alterName, neuerName);

	neu_dataFile.open(neuerName);
  
	// * Es wird der neue Dateiname in die Datei daten.txt gespeichert
	ofstream speichernName;
	speichernName.open("daten.txt", fstream::app);
	speichernName << neuerName << endl;

	// * Alle Dateien werden geschlossen
	mein_dataFile.close();
	neu_dataFile.close();
	speichernName.close();
	lesenName.close();
//getchar();

exit(0);
}

