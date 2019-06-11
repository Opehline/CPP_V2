// Gisela Neira
// C++ Aufbaukurs E229
// * Basisprogramm 01.01.03 der C++ Programmierung
// * Warum Fehler?

#include <iostream>

class Teilnehmer
{
	private:
    //protected:
    //public:
		std::string vorname_tn;
		std::string name_tn;
		int alter_tn;
		long int telefon_tn;
		std::string anschrift_tn;
		std::string gender_tn;

	public:
		void datenausgabe()
		{
			std::cout << "Vorname des Teilnehmers: " << vorname_tn << std::endl;
			std::cout << "Name des Teilnehmers: " << name_tn << std::endl;
			std::cout << "Alter des Teilnehmers: " << alter_tn << std::endl;
			std::cout << "Telefon des Teilnehmers: " << telefon_tn << std::endl;
			std::cout << "Anschrift des Teilnehmers: " << anschrift_tn << std::endl;
			std::cout << "Gender des Teilnehmers: " << gender_tn << std::endl << std::endl;
		}
};

int main(int argc, char **argv)
{
	// * Versuch auf die private-Variablen ausserhalb der Klasse zuzugreifen
    Teilnehmer Koch;

    Koch.vorname_tn = "Angelika";
    Koch.name_tn = "Koch";
    Koch.alter_tn = 42;
    Koch.telefon_tn = 645445632;
    Koch.anschrift_tn = "Haus auf dem Berg 16";
    Koch.gender_tn = "weiblich";
    Koch.datenausgabe();

return 0;
}
