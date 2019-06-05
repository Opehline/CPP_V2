// Gisela Neira
// C++ Basics E228
// * Projekt 06.07.01 der C/C++ Programmierung
// * statische Variable als Funktionsvariable
// * Die statische Variable ist auch ausserhalb der
// * Funktion in der sie deklariert wurde.
// * (nur gueltig innerhalb dieser Quellcodedatei.)

#include "05.07.03-header.h"

int _globalvar = 15;
static int _staticvar = 20;

void rechnung1()
{
    //_staticvar *= 2; 		// * _staticvar = _staticvar*2
	_globalvar /= 3; 		// * _globalvar = _globalvar/3

	printf("Global Variable = %d\n", _globalvar);
    //printf("Static Variable = %d\n", _staticvar);
}

int main()
{
    int i;

    for (i = 0; i <= 5; ++i)
    {
		add5();
		//printf("staticVariable %i", staticVariable);
    }

	//printf("staticVariable %i", staticVariable);

	//_staticvar = 6;
	//printf("_staticvar %i", _staticvar);

//    printf("\nDie statische Variable ist auch in einer anderen Funktion gueltig.\n");
//    printf("\nNuetzlich falls man keine globale Variable benutzen moechte.\n\n");

	//rechnung1();
	//rechnung();
return 0;
}
