// Gisela Neira
// C++ Basics E228
// * Programm 06.01.06 der C/C++ Programmierung
// * Stuctuebergabe an eine Funktion
// * Ausgabe auf Bildschirm

#include <iostream>

struct specStruct
{
	int count;
	int member[100];
}sMember;

class specClass
{
	int count;
	int member[100];
	public:
		// * Methoden werden physich nicht innerhalb der Klasse im Speicher gelegt.
		int machwas(){ std::cout << "Mach was" << std::endl;}
}cMember;


// * Alle drei Schittstellen sind richtig:
//int fausgabe(struct specStruct liste) 	// * Uebergabe als Kopie (Call by Value)
int fausgabe(struct specStruct &liste)		// * Uebergabe als Referenz (in C++ Form)
//int fausgabe(struct specStruct *liste)  	// * Uebergabe der Adresse an Pointer
{
	std::cout << "********** Ausgabe der Funktion **********" << std::endl;
	std::cout << "Adresse der kopierten Struktur >" << &liste << std::endl;
	//std::cout << "Adresse der uebergeben Struktur >" << liste << std::endl;
}

int main(int argc, char **argv)
{
    //fausgabe(sMember); 				// * richtig: 	Uebergabe als Kopie aber auch als Referenz
									// * 			(da Name auch auf das erste Element der Struktur referenziert.)
    //fausgabe(*sMember); 			// * falsch: 	hier wird versucht einen leeren Pointer zu uebergeben
    //fausgabe(&sMember); 			// * richtig: 	uebergabe der Adresse der Struktur (Uebergabe durch Pointer)

	//std::cout << &sMember << " " << &sMember.count << std::endl;

	#if 1
    int wahr1 = sizeof(specClass)==sizeof(specStruct);
    int wahr2 = sizeof(cMember)==sizeof(sMember);
    std::cout << wahr1 << " " << sizeof(cMember) << std::endl;
    std::cout << wahr2 << " " << sizeof(sMember) << std::endl;
	#endif

return 0;
}
