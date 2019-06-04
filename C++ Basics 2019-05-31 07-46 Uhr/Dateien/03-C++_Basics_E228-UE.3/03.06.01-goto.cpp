// Gisela Neira
// C++ Basics E228
// * Programm 03.06.01 der C/C++ Programmierung
//   Vorwaertssprung und Rueckwaertssprung
//   Schalter fuer Sprunganweisung innerhalb und ausserhalb
//   der Programmebene



#include <iostream>
#define FUNC // * Schalter

void nameEingebenFunktion();

int main()
{

neueEingabe: // * Sprungmarke fuer goto-Befehl

    int betrag=0;
	std::string name;

    std::cout << "\nBitte geben Sie den auszuzahlenden Betrag an: > ";
    std::cin >> betrag;

    if((betrag%10)!=0)
    {
       std::cout << "Der Betrag muss durch 10 teilbar sein!!!\n\n";
       goto neueEingabe;   // * Gehe zur Sprungmarke neueEingabe (Rueckwaertssprung)   // * Zeile 16
    }
    else
    {
		std::cout << "Sie haben einen richtigen Betrag eingegeben." << std::endl;
		std::cout << "Geben Sie Ihr Name ein:" << std::endl;
		goto nameEingabe; 	// * Gehe zur Sprungmarke nameEingabe (Vorwaertssprung)   // * Zeile 43
    }
//......
//........

	std::cout << "Hier steht ein sehr professioneller Code!" << std::endl;
//.....
//......

#ifndef FUNC
nameEingabe:

	std::cin >> name;
	std::cout << "Ihr Name ist: " << name << std::endl;
#endif

return 0;
}

#ifdef FUNC
void nameEingebenFunktion()
{
	nameEingabe: // * Hier moeglich!? -> NEIN
	std::string name;

	std::cin >> name;
	std::cout << "Ihr Name ist: " << name << std::endl;
}
#endif
