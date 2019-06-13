#include "Ausgabe.hpp"

template<typename KlasseObject> 
void Ausgabe::ausgabef(KlasseObject& ausgebenObjekt)
{
	std::cout << ausgebenObjekt.einKampf.ritter1.getName() << std::endl;
	std::cout << ausgebenObjekt.einKampf.ritter1.getLebenskraft() << std::endl;
}

