// Gisela Neira
// C++ Aufbaukurs E229
// * Progamm 07.04.01 C++ Programmierung
// * Datei umbenennen in Array-Version

#include <iostream>
#include <fstream>
#include <cstdlib>

 
using namespace std;
 
int main(){

	char alterName[11] = "data01.txt", neuerName[11];
	int i=0;

	ofstream mein_dataFile(alterName);
	mein_dataFile.close();
		
	for(i=0; i<11; i++)
	{
		neuerName[i] = alterName[i];
	}
	
	neuerName[5]=alterName[5]+1; 		// *  6. Element nimmt Wert 2 an.
	rename(alterName, neuerName);
    
exit(0);
}
