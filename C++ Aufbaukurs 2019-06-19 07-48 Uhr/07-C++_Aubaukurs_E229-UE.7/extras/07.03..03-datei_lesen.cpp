// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 08.03.03 C++ Programmierung
// * Datei schliessen

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  std::string line;
  int i=0;

  ifstream mein_dataFile("data.txt");
  if(mein_dataFile)
  {
	// * istream& getline(istream& is, string& str, char delim);
	// * getline liesst eine ganze Zeile
	// * Nimmt die chars von "is" und speichert sie in "str" bis das
	// * Delimitations-char gefunden wurde
		while(getline(mein_dataFile, line))
	    {
	    	if(line=="momo")
	    	{ i++; }
	  	}

  }else cerr << "Ups! En Fehler!";

	cout << i << endl;

mein_dataFile.close();

return 0;
}
