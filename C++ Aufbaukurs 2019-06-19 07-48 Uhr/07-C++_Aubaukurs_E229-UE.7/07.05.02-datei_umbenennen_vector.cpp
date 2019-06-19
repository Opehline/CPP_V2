// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.04.02 C++ Programmierung
//   Datei umbenennen in Vector-Version

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>


//using namespace std;

int main()
{
	std::string NameDatei="data01.txt";

	std::vector<char> alterName(NameDatei.begin(), NameDatei.end()); // * Am Ende + 1
	//alterName.push_back('\0');
	std::vector<char> neuerName(alterName.begin(), alterName.end());

	//cout << neuerName.at(5);

					#if 0
					char *polo = &*alterName.begin();
					std::cout <<"Polo > "<< polo;

					char *palo = &*alterName.end();
					std::cout <<"\nPalo > " << palo;

					std::ofstream mein_dataFile(polo);
					mein_dataFile.close();
					#endif

	neuerName.at(5)=alterName.at(5)+1;

	// * Gibt pointer zu dem intern alloquierten Array der vom Vector erstellt
	// * wurde. Beim aendern des Vectors kann das nicht mehr funktionieren.
	// * Das redundante aussehende &* ist das der * in Wirklichkeit operator *
	// * der vom iterator returned wird durch v.begin().
	// * Es gibt eine Reference zum erste char des Arrays.

	// * Warum Fehler
    #if 0
  	rename(alterName, neuerName);

	// * Warum kein Fehler
    #else
	//0x0fc4
	//|----|----|----|----| neuerName
	//|----|----|----|----| alterName
	char *pnN = &*neuerName.begin();
	char *paN = &*alterName.begin();
	rename(paN, pnN);
	#endif

exit(0);
}

