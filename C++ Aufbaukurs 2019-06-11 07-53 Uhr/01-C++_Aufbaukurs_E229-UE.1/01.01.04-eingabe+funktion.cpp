// Gisela Neira
// C++ Aufbaukurs E229
// * Basisprogramm 01.01.04 der C++ Programmierung
// * Dateneingabe mit private-Bereich
// * und Funktionen

#include <iostream>

class Teilnehmer
{
	private:
		std::string vorname_tn;
		std::string name_tn;
		int alter_tn;
		long int telefon_tn;
		char anschrift_tn[60];
		//std::string anschrift_tn;
		std::string gender_tn;

	public:
		// * Zugriff auf private-Variablen nur innerhalb der selben Klasse moeglich
	   	void dateneingeben()
		{
			std::cout << "Eingabe Vorname des Teilnehmers: " << std::endl;
			std::cin >> vorname_tn;
			std::cin.ignore();
			std::cout << "Eingabe Name des Teilnehmers: " << std::endl;
			std::cin >> name_tn;
			std::cin.ignore();
			std::cout << "Eingabe Alter des Teilnehmers: " << std::endl;
			std::cin >> alter_tn;
			std::cin.ignore();
			std::cout << "Eingabe Telefon des Teilnehmers: " << std::endl;
			std::cin >> telefon_tn;
			std::cin.ignore();
			std::cout << "Eingabe Anschrift des Teilnehmers: " << std::endl;
			std::cin.getline(anschrift_tn, sizeof(anschrift_tn));
			//getline(std::cin, anschrift_tn);
			std::cout << "Eingabe Gender des Teilnehmers: " << std::endl;
			std::cin >> gender_tn;
			std::cin.ignore();
		}

		void datenausgabe()
		{
			std::cout << "******************************************** " << std::endl << std::endl;
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
    Teilnehmer Koch;
    Koch.dateneingeben();	//	* Von ausserhalb der Klasse koennen Funktion im public-Bereich aufgerufen werden.
    Koch.datenausgabe();

return 0;
}
