// Gisela Neira
// C++ Basics E228
// * Programm 06.01.07 der C/C++ Programmierung
// * Übergabe eines Strukts an eine Funktion
// * For-loop


#include <iostream>
//#include <ctype.h>
//#include <stdlib.h>

#define ELEMENTE 3


struct Kinder
{
    char name[25];
    float groesse;
    int geburtsjahr;
}kinder[ELEMENTE];

void eingabe(struct Kinder kinder[]);
void ausgabe(struct Kinder *kinder);

int main(int argc, char **argv)
{
	eingabe(kinder);
	ausgabe(kinder);

return 0;
}


void eingabe(struct Kinder *kinder)
{
    int i=0;

    for(i=0; i<=ELEMENTE; i++)
    {
		//std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "*****Kind " <<  i+1 << " ******************" << std::endl;
		std::cout << "Geben Sie Namen ein >" << std::endl;
		std::cin >> (kinder+i)->name;
		std::cin.clear();
		std::cout << "Geben Sie Groesse ein: >";
		std::cin >> (kinder+i)->groesse;
		std::cin.clear();
		std::cout << "Geben Sie Geburtsjahr ein: >" << std::endl;
		std::cin >> (kinder+i)->geburtsjahr;
		std::cin.clear();
    }
}

void ausgabe(struct Kinder *kinder)
{
    int i=0;

    for(i=0; i<=ELEMENTE; i++)
    {
		std::cout << "*****Kind " <<  i+1 << " ******************" << std::endl;
		std::cout << "Name Kind " <<  i+1 << ": " << kinder[i].name << std::endl;
		std::cout << "Groesse Kind "  <<  i+1 << ": "<<  kinder[i].groesse << std::endl;
		std::cout << "Geburtsjahr Kind " <<  i+1 << ": " <<  kinder[i].geburtsjahr << std::endl;
    }
}
