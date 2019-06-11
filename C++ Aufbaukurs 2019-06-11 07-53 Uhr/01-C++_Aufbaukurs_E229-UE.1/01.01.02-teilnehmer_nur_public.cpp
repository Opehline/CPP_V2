// Gisela Neira
// C++ Aufbaukurs E229
// * Basisprogramm 01.01.02 der C++ Programmierung
// * Elementale Struktur einer Klasse (nur Public)
// * Nichts auf Bildschirm sichtbar

#include <string>


class Teilnehmer
{
	public:
		// * Diese Variablen werden automatisch mit 0 initialisiert
		// * Da sie ausserhalb jeder Art von Funktionen liegen,
		// * gelten sie als "globale" Variablen.
		std::string vorname_tn;
		std::string name_tn;
		int alter_tn;
		long int telefon_tn;
		std::string anschrift_tn;
		std::string gender_tn;
};

int main(){

    Teilnehmer Koch;

    Koch.vorname_tn = "Angelika";
    Koch.name_tn = "Koch";
    Koch.alter_tn = 42;
    Koch.telefon_tn = 645445632;
    Koch.anschrift_tn = "Haus auf dem Berg 16";
    Koch.gender_tn = "weiblich";

return 0;
}
