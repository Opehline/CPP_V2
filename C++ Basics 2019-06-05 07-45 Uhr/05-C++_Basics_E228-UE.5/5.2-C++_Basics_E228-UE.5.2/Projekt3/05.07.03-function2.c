#include "05.07.03-header.h"

void rechnung()
{
    //_staticvar *= 2; 		// * _staticvar = _staticvar*2
	_globalvar /= 3; 		// * _globalvar = _globalvar/3

	printf("Global Variable = %d\n", _globalvar);
    //printf("Static Variable = %d\n", _staticvar);
}
