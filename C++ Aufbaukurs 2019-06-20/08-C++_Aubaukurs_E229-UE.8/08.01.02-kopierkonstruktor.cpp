// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 09.01.02 der C++ Programmierung
// * Kopierkonstruktor
// * Uebergabe Objekt als Parameter zur Erstellung
// * des neuen Objekts - Klon kann Daten aendern

#include <iostream>
#include <string>


using namespace std;


class Schaf
{
    public:
        int alter;
        string name;
        //...... 37 Variablen

        Schaf()
        {
            alter = 0;
            name = "\0";
            cout << "Bin ein Schaf." << endl;
        }
        Schaf(int alter, string name)
        {
            this->name = name;
            this->alter = alter;
        }

        void NameAlterAendern(int alter, string name)
        {
            this->name=name;
            this->alter=alter;
        }
        void Ausgabe()
        {
            cout << "Ich bin " << name << " und " << alter << " Jahre alt." << endl;
        }
};



int main()
{
    Schaf dolly;						// * Wird nur einmal aufgerufen
    dolly.alter=67;
    dolly.name="Dolly";
    cout << "\nSchaf sagt: " << endl;
    cout << dolly.alter << endl;
    cout << dolly.name<< endl;
    dolly.Ausgabe();

    Schaf dolly_clon(dolly);			// * Das ist ein "Kopierkonstruktor"
    cout << "\nKopierter Schaf sagt; " << endl;
    cout << dolly_clon.alter << endl;
    cout << dolly_clon.name<< endl;
    dolly_clon.NameAlterAendern(55, "Bolly");
    dolly_clon.Ausgabe();

return 0;
}
