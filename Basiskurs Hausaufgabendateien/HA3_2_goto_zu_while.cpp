// Gisela Neira
// C++ Basics E228
// * Programm 03.06.01 der C/C++ Programmierung
//   Vorwaertssprung und Rueckwaertssprung
//   Schalter fuer Sprunganweisung innerhalb und ausserhalb
//   der Programmebene

// Hausaufgabe 3.2 -> goto verändern zu anderer Struktur

#include <iostream>
#define FUNC // * Schalter

void nameEingebenFunktion();

int main()
{

int betrag = 1;

while((betrag%10)!=0) {
	std::string name;

    std::cout << "\nBitte geben Sie den auszuzahlenden Betrag an: > ";
    std::cin >> betrag;

    std::cout << "Der Betrag muss durch 10 teilbar sein!!!\n\n";
}

std::cout << "Sie haben einen richtigen Betrag eingegeben." << std::endl;
std::cout << "Geben Sie Ihr Name ein:" << std::endl;

#ifdef FUNC
    nameEingebenFunktion();
#endif // FUNC

#ifndef FUNC
	std::cin >> name;
	std::cout << "Ihr Name ist: " << name << std::endl;
#endif
//......
//........

	std::cout << "Hier steht ein sehr professioneller Code!" << std::endl;
//.....
//......



return 0;
}

#ifdef FUNC
void nameEingebenFunktion()
{
	std::string name;

	std::cin >> name;
	std::cout << "Ihr Name ist: " << name << std::endl;
}
#endif
