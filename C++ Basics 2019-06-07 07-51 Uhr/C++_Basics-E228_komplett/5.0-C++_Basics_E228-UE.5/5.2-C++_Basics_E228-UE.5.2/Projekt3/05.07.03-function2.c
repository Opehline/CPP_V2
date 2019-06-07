#include "05.07.03-header.h"

void rechnung()
{
    //_staticGlobvar *= 2; 		// * _staticGlobvar = _staticGlobvar*2
	_globalvar /= 3; 		// * _globalvar = _globalvar/3

	printf("Funk rechnung() Global Variable = %d\n", _globalvar);
    //printf("Static Variable = %d\n", _staticGlobvar);
}
