// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.03.01 der C++ Programmierung
// * Eingekapselte (eingeschlossene) Klasse

#include <iostream>
#include <string>


using namespace std;


class Schaf
{
    public:
        int MengeBeine, MengeAugen, MengeOhren, QualitaetWolle;
        string TierArt;

    	class Angaben
		{
			public:
				int Alter, IdNr, StallNummer;
                string Name;

                void Meahhh()
                {
                    cout << "Meahhhhh!!!..." << endl;
                }
		};

        Angaben angaben;

        void AusgabeSchaf()
        {
            cout << "Menge Augen: " <<  MengeAugen << endl;
            cout << "Menge Ohren: " << MengeOhren << endl;
            cout << "Menge Beine: " << MengeBeine <<endl;
            cout << "Qualitaet Wolle: " << QualitaetWolle << endl;
            cout << "Tearart: " << TierArt  << endl;

            cout << "\nAlter: " << angaben.Alter << endl;
            cout << "Name: " << angaben.Name << endl;
            cout << "ID: " << angaben.IdNr << endl;
            cout << "Stallnr.: " << angaben.StallNummer << endl;
        }
};

int main()
{
    Schaf::Angaben angabendolly;
    Schaf dolly;

    dolly.MengeBeine=4;
    dolly.MengeOhren=2;
    dolly.MengeAugen=2;
    dolly.QualitaetWolle=1;
    dolly.TierArt="Saeugetier";

    dolly.angaben.Alter=5;
    dolly.angaben.Name="Dolly";
    dolly.angaben.IdNr=3;
    dolly.angaben.StallNummer=103;
    dolly.angaben.Meahhh();

    dolly.AusgabeSchaf();
    angabendolly.Meahhh();

  return 0;
}
