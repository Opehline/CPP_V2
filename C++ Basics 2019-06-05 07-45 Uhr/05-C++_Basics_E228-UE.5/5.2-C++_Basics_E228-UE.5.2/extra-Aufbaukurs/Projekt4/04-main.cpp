// Gisela Neira
// C++ Basics E228
// * Programm 02.06.01 der C/C++ Programmierung
// * Bedingte Compilierung in C++ Programmierung 
// * (genauso gueltig, mit minimalen Aenderungen, 
// * in C Programmierung).

#include "header.hpp"



int main(int argc, char **argv)
{
    // * Ein uns auskommenieren
    setlocale(LC_ALL, "");
    setlocale(LC_ALL, "de_DE.UTF-8");
		 
    int a=0, i=0;
    float b[MAX];

	
	std::cout << "An dieser Stelle steht der nicht testbed\xfc""rftige Teil des Programms." << std::endl; // * Nicht portable Version der Ausgabe von Sonderzeichen

	testBereich(a, i, b);

return 0;
}



