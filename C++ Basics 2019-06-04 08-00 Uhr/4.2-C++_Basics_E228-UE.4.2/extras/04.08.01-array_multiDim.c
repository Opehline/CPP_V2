// Gisela Neira
// C++ Basics E228
// * Programm 04.04.01 der C/C++ Programmierung
// * Multidimensionale Arrays
// * MD-Arrays sind in Wirklichkeit 1D-Arrays plus Terminatorzeichen.

#include "stdio.h"

int main(int argc, char **argv)
{

	char arrAlt[] = "So\0viele\0Woerter\0in\0nur\0einem\0Array";	
	int vieleZahlenArray[6];

	// * Initialisierung der Werte des int-Arrays
	vieleZahlenArray[0]=59;		// * [0]
	vieleZahlenArray[1]='\0';	// * [1]
	vieleZahlenArray[2]=658;	// * [2]
	vieleZahlenArray[3]='\0';	// * [3]
	vieleZahlenArray[4]=134;	// * [4]
	vieleZahlenArray[5]='\0';	// * [5]
	vieleZahlenArray[6]=12;		// * [6]

	/*
		// * Ein eindimensionales Array
	->	[ 0 ][ 1 ][  2 ][ 3 ][ 4 ]...
		['S']['o']['\0']['v']['i']['e']['l']['e']['\0']['W']['o']['e']['r']['t']['e']['r']['\0']['i']['n']['\0']['n']['u']['r']['\0']['e']['i']['n']['e']['m']['\0']['A']['r']['r']['a']['y']

	*/

	// * Ausgabe des Strings
	printf("Ausgabe des \\0-Terminators: %s \n", arrAlt+2);
	printf("Text: \"%s\" \n", arrAlt+3);
	printf("Zeichen: \"%c\" \n", *(arrAlt+3)); // * Nicht mehr Adresse
											// * sondern das Zeichen

	// * Ausgabe des int-Arrays
	printf("Ausgabe: %i \n", *(vieleZahlenArray+0));
	printf("Ausgabe des \\0-Terminators: %i \n", *(vieleZahlenArray+2));
    
return 0;
}
