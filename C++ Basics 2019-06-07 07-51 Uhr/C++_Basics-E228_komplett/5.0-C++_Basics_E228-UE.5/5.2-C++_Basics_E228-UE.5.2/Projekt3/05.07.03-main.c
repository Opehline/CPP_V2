// Gisela Neira
// C++ Basics E228
// * Projekt 06.07.01 der C/C++ Programmierung
// * statische Variable als Funktionsvariable
// * Die statische Variable ist auch ausserhalb der
// * Funktion in der sie deklariert wurde.
// * (nur gueltig innerhalb dieser Quellcodedatei.)

#include "05.07.03-header.h"

void rechnung1();
int main();

int _globalvar = 15;
const int _globalConstvar = 15;
static int _staticGlobvar = 20;



main()
{
    int i;

    for (i = 0; i <= 5; ++i)
    {
		//add5();
		//printf("staticLocalVar %i", staticLocalVar);
    }

	//printf("staticLocalVar %i", staticLocalVar);

	//_staticvar = 6;
	//printf("_staticGlobvar %i", _staticGlobvar);

    //printf("\nDie statische Variable ist auch in einer anderen Funktion gueltig.\n");
    //printf("\nNuetzlich falls man keine globale Variable benutzen moechte.\n\n");

	//rechnung1();
	rechnung();
return 0;
}


rechnung1()
{
    //_staticGlobvar *= 2; 	// * _staticGlobvar = _staticGlobvar*2
	_globalvar /= 3; 		// * _globalvar = _globalvar/3

	//printf("Global Variable = %d\n", _globalvar);
    //printf("Static Variable = %d\n", _staticGlobvar);
}
