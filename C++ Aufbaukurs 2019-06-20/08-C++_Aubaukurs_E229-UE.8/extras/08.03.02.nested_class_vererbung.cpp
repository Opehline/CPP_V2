// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.03.02 der C++ Programmierung
// * Eingekapselte (eingeschlossene) Klasse
// * Vererbung

#include <iostream>
#include <string>


using namespace std;


class Schaf
{
    public:
        int MengeBeine, MengeAugen, MengeOhren;
        int QualitaetWolle;
        string TierArt;
        string name;

        class Angaben
        {
            public:
                int Alter;
                string Name;
                int IdNr;

                virtual void Meahhh()=0;
        };

        class Stall: public Angaben
        {
            public:
                int StallNummer;
                int StallMenge;

                void Meahhh() override
                {
                    cout << "Ein Maeehhhhhh!!!..." << endl;
                }

                void DasIstEinStall()
                {
                    cout << "Vieeeele Maeeeeeeeeehhhhhh!!!..." << endl;
                }
        };

        //Angaben angaben;
        Stall stall;

        void AusgabeSchaf()
        {
            cout << "Menge Augen: " <<  MengeAugen << endl;
            cout << "Menge Ohren: " << MengeOhren << endl;
            cout << "Menge Beine: " << MengeBeine <<endl;
            cout << "Qualitaet Wolle: " << QualitaetWolle << endl;
            cout << "Tearart: " << TierArt  << endl;
            cout << "\nAlter: " << stall.Alter << endl;
            cout << "Name: " << stall.Name << endl;
            cout << "ID: " << stall.IdNr << endl;
            cout << "Stallnr.: " << stall.StallNummer << endl;
            cout << "Menge Schafe in einem Stall: " << stall.StallMenge << endl;
        }
};



int main()
{

    Schaf::Stall angabendolly;
    Schaf dolly;
    dolly.MengeBeine=4;
    dolly.MengeOhren=2;
    dolly.MengeAugen=2;
    dolly.QualitaetWolle=1;
    dolly.TierArt="Saeugetier";

    dolly.stall.Alter=5;
    dolly.stall.Name="Dolly";
    dolly.stall.IdNr=3;

    dolly.AusgabeSchaf();
    angabendolly.Meahhh();

  return 0;
}
