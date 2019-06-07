// Gisela Neira
// C++ Basics E228
// * Programm 06.01.05 der C/C++ Programmierung
// * Ausgabe eines Structs durch for-Loop für beliebig
// * viele Eingaben

#include <iostream>

struct Kinder
{
    char name[25];
    float groesse;
    int geburtsjahr;
};


int main(int argc, char **argv)
{
    int i=0;

	// * Wir legen einen Array Typ Strukt an mit definierter Groesse
    struct Kinder kinder[3]; 		// * Alternativ auch struct Kinder *kinder;
									// * (Aber nicht immer moeglich unter Windows-Betriebssystemen
									// * wegen Speicherplaztverwaltung der verschiedenen Betriebssystemen)
									// * Dynamisches alloquieren eines Structs: struct Kinder *kinder = malloc(sizeof(Kinder));

    for(i=0; i<=2; i++)
    {
		std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "Geben Sie den Namen fuer Kind " << i+1 << " ein: > " << std::endl;
		std::cin >> kinder[i].name;
		std::cin.clear();
		std::cout << "Geben Sie die Groesse fuer Kind " << i+1 << " ein: > " << std::endl;
		std::cin >> kinder[i].groesse;
		std::cin.clear();
		std::cout << "Geben Sie das Geburtsjahr fuer " << i+1 << " ein: > " << std::endl;
		std::cin >> kinder[i].geburtsjahr;
		std::cin.clear();
    }

    for(i=0; i<=2; i++)
    {
		std::cout << "---------------------------------------------------" << std::endl;
		std::cout << "Name Kind " << i+1 << ": " << kinder[i].name << std::endl;
		std::cout << "Groesse Kind " << i+1 << ": " << kinder[i].groesse << std::endl;
		std::cout << "Geburtsjahr Kind " << i+1 << ": "<< kinder[i].geburtsjahr << std::endl;
    }

return 0;
}
