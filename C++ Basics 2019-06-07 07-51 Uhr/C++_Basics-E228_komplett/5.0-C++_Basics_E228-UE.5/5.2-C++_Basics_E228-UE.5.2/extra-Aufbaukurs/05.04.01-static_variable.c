// Gisela Neira
// C++ Basics E228
// * Funktionen 06.04.01 der C/C++ Programmierung
// * statische Variable als globale Variable
// * (nur gueltig innerhalb dieser Quellcodedatei.)

#include <stdio.h>

#define hoehe 25
static int _static;
int _global;
const int breite = 15;
static int tiefe = 18;


int main(int argc, char **argv)
{
    int volumen=0, normale_var;

    tiefe = 20;
    //breite = 10;
    volumen = hoehe*breite*tiefe;
    printf("%i Kubikmilimeter\n\n", volumen);

	printf("Staticvar: %i\n", _static); 		// * Werden immer mit Null initialisiert.
	printf("Globalvar: %i\n", _global);			// * Werden immer mit Null initialisiert.
	printf("Normalvar: %i\n", normale_var);		// * Muell
;
return 0;
}

