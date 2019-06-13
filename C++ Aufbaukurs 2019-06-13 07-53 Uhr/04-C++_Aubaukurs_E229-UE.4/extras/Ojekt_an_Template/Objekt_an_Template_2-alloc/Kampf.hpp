
#include "Held.hpp"
#include <iostream>
class Kampf
{
    public:
		Ritter ritter1;
		Zauberer zauberer1;
		Fee fee1;
	
		Typ werHatDenHeldenhaftenKampfGewonnen();
};

class Sieger
{
    public:
		enum Typ typ;
		Kampf einKampf;
		
		void resultatKampf(Sieger *sieger);
	
		template<typename KlasseObject> 
		KlasseObject siegerAusgabe(KlasseObject meinSieger);
};
