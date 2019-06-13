#include <iostream>
#include "Helden.hpp"
#include "Ausgabe.hpp"
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
		Ausgabe ausgabe;
		Kampf einKampf;
		
		void resultatKampf(Sieger& spielfigur);
	
		template<typename KlasseObject> 
		KlasseObject siegerAusgabe(KlasseObject& meinSieger);
};

