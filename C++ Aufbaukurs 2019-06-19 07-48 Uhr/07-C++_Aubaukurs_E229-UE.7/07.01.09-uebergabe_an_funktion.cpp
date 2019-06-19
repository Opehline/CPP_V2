// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.01.03 der C++ Programmierung
// * Streamsobjekte koenen nicht an Funktionen
// * als Kopie uebergeben werden.
// * Sie koennen nur als Referenz an Funktionen
// * uebergeben werden.
// * Es wuerde ansosnten eine zweite Datei mit
// * den selben Namen erstellt werden.

#include <fstream>
#include <iostream>

class Dateiverwaltung
{
	public:
		Dateiverwaltung(std::ofstream filein);
};

Dateiverwaltung::Dateiverwaltung(std::ofstream filein)
{
	filein << "Warum darf ich nur keine Kopie erhalten...??"
           << std::endl;
}

int main(void)
{
	std::ofstream outfile;
	outfile.open("data.txt");

	Dateiverwaltung datei(outfile);

	outfile.close();

return 0;
}
