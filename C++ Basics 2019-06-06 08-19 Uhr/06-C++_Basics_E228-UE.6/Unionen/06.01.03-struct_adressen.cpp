// Gisela Neira
// C++ Basics E228
// * Programm 06.01.03 der C/C++ Programmierung
// * Erstellung einer Datenstrukrut + Deklaration
// * Lokale Datenstruktur - Adressendruck.
// * Weshalb char 4 Plaetze bekommt.
// * Padding fuer 32(62) Bit Systeme
// * Ein char kann vielleicht groesser sein

#include <stdio.h>
#include <iostream>

int main(int argc, char **argv)
{

    struct Kinder
    {
		char name;
		int alter;
		float groesse;
		int geburtsjahr;
		char geburtsmonat[10];
		int geburtstag;
    };

    // * Es werden drei Variablen Struct Kinder erstellt:
    struct Kinder kinder1;
	struct Kinder kinder2;
	struct Kinder kinder3;
	
	#if 0
	std::cout << "\nSizeof kinder1 " <<  sizeof(kinder1) << std::endl;
	std::cout << "\nSizeof kinder2 " <<  sizeof(kinder2) << std::endl;
	std::cout << "\nSizeof kinder3 " <<  sizeof(kinder3) << std::endl;
	#endif
	
	std::cout << "\nStructvariable kinder1 (Selbe Adresse wie das erste Element des Structs) > " << (&kinder1) << std::endl;
	std::cout << "Structvariable kinder2 (Adresse des ersten Elements + sizeof(kinder2)) > " << (&kinder2) << std::endl;
	std::cout << "Structvariable kinder3 (Adresse des ersten Elements + sizeof(kinder3)) > " << (&kinder3) << std::endl;

	#if 1
    printf("\nName 3: \t%p (gleichzeitig das erste Element des Structs)\n", (&kinder3.name));
    std::cout << "Alter 3: \t" <<  &kinder3.alter << std::endl;
    std::cout << "Groesse 3: \t" <<  &kinder3.groesse << std::endl;
    std::cout << "Geburtsjahr 3: \t" <<  &kinder3.geburtsjahr << std::endl;
    std::cout << "Geburtsmonat 3: " <<  &kinder3.geburtsmonat << std::endl;
    std::cout << "Geburtstag 3: \t" <<  &kinder3.geburtstag << std::endl;

    printf("\nName 2: \t%p (gleichzeitig das erste Element des Structs)\n", (&kinder2.name));
    std::cout << "Alter 2: \t" <<  &kinder2.alter << std::endl;
    std::cout << "Groesse 2: \t" <<  &kinder2.groesse << std::endl;
    std::cout << "Geburtsjahr 2: \t" <<  &kinder2.geburtsjahr << std::endl;
    std::cout << "Geburtsmonat 2: " <<  &kinder2.geburtsmonat << std::endl;
    std::cout << "Geburtstag 2: \t" <<  &kinder2.geburtstag << std::endl;

    printf("\nName 1:\t\t%p (gleichzeitig das erste Element des Structs)\n", (&kinder1.name));
    std::cout << "Alter 1: \t" <<  &kinder1.alter << std::endl;
    std::cout << "Groesse 1: \t" <<  &kinder1.groesse << std::endl;
    std::cout << "Geburtsjahr 1: \t" <<  &kinder1.geburtsjahr << std::endl;
    std::cout << "Geburtsmonat 1: " <<  &kinder1.geburtsmonat << std::endl;
    std::cout << "Geburtstag 1: \t" <<  &kinder1.geburtstag << std::endl;
	#endif
	
return 0;
}
