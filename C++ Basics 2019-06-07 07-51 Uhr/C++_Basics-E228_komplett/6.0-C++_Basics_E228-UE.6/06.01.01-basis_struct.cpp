// Gisela Neira
// C++ Basics E228
// * Programm 06.01.01 der C/C++ Programmierung
// * Erstellung einer Datenstrukrut + Deklaration
// * Lokale Datenstruktur + Ausgabe auf Bildschirm
// * NICHT BESTE OPTION!!

#include <iostream>

int main(int argc, char **argv)
{
    struct Kinder
    {
		char name[25]; // FELD
		int alter;
		float groesse;
		int geburtsjahr;
		char geburtsmonat[10];
		int geburtstag;
    };

    // * Es wird eine Variable Struct Kinder erstellt.
    struct Kinder kind1={"Aurora", 3, 0.90, 2015, "Oktober", 5};

    std::cout << "Name: " << kind1.name << std::endl;
    std::cout << "Alter: " << kind1.alter << std::endl;
    std::cout << "Groesse: " << kind1.groesse << std::endl;
    std::cout << "Geburtsjahr: " << kind1.geburtsjahr << std::endl;
    std::cout << "Geburtsmonat: " << kind1.geburtsmonat << std::endl;
    std::cout << "Geburtstag: " << kind1.geburtstag << std::endl;

return 0;
}
