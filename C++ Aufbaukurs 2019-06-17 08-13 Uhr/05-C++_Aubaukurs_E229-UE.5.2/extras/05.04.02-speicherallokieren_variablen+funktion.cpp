// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.04.02 der C++ Programmierung
// * Speicherallokierung von Variablen und Objekten
// * Vergleich von Stack und Heapspeicher

#include <iostream>
#include <stdlib.h>

class Klassen
{
	public: double classFunction(double x);
}ojekt;

double function(double x) 	// * "Lose" Funktion
{;}

double Klassen::classFunction (double x) // * Member-Funktion
{;}

int globalvar;
int staticvar;


void pruefung(int i) 
{
	int l=1;
	int *d	= &l;
   	int *ptr = new int(1);

    std::cout 	<< "Stack > " << d << "  \n"
				<< "Heap > "<< ptr << "  \n"
				<< "Globvar > " << &globalvar << "  \n"
				<< "StaticGlobvar > " << &staticvar << "  \n"
				<< "Pointer > " << &d << "  \n"
				<< "Pointer allc > " << &ptr << "  \n";
	
	printf("Lose Funktion > %#p ", &function);
	//std::cout << &function << std::endl;
	printf("Member Funktion > %#p\n", &Klassen::classFunction);
	//std::cout << &Klassen::classFunction << std::endl;
	/**/

    if (i <= 0) {return;}
    //pruefung(i-1);	Rekursive Funktion
}

int main() 
{
    pruefung(10);
    return 0;
}
