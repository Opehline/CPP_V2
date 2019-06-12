#include "Ausnahmefallbehandlung.hpp"

Ausnahmefallbehandlung::Ausnahmefallbehandlung(int _grund)
{
	grund = _grund;
};

int Ausnahmefallbehandlung::get_grund()
{ return grund; }
