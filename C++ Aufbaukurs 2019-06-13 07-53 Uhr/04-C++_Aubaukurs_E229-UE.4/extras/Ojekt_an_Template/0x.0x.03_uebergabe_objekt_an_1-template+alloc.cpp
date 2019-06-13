// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 0x.0x.03 der C/C++ Programmierung
// * Class + template-Funktion
// * Wie einen konsistenten return-Wert eines Objekts erstellen,
// * wenn in Laufzeit der return-Wert des Objekt erst ermittelt
// * werden kann

#include <iostream>
#include <typeinfo>

enum Typ
{
    IST_FRAU, IST_MANN, IST_ANDERS    
};

class Mensch
{
    public:
		enum Typ typ;
		
		template<typename TypObjekt> 
		void ausgabef(KlasseObject& ausgebenObjekt, TypObjekt& typ)
		{
			switch(typ)
			{
				case 0:
					std::cout << "******Oh, eine Frau > " << ausgebenObjekt.einKampf.ritter1.getLebenskraft() << std::endl;
					break; 
				case 1:
					std::cout << "******Oh, ein Mann > " << ausgebenObjekt.einKampf.zauberer1.getLebenskraft() << std::endl;
					break;
				case 2:
					std::cout << "******Oh, etwas anderes > " << ausgebenObjekt.einKampf.fee1.getLebenskraft() << std::endl;
					break;
				default: exit(0);
			}
		}
		
		
	void auswahl(Sieger& spielfigur);
};

int main(int argc, char **argv)
{
    Mensch gender;

    // * Auf diesem Bereich kann in der Laufzeit agiert werden.
    gender.typ = gender.einKampf.werHatDenHeldenhaftenKampfGewonnen();
	ausgabe.ausgabef(gender, gender.typ);
    gender.auswahl(gender);
	ausgabe.ausgabef(gender, gender.typ);

return 0;
}



void Mensch::auswahl(Sieger& spielfigur)
{
    switch(spielfigur.typ)
    {
		case IST_FRAU:
		// * Hier wird ein Ritter erstellt
		spielfigur.ausgabef(spielfigur, spielfigur.typ);
		break;
		case IST_MANN:
		// * Hier wird ein Zauberer erstellt
		spielfigur.ausgabef(spielfigur, spielfigur.typ);
		break;
	
		case IST_ANDERS:
		// * Hier wird ein Fee erstellt
	spielfigur.ausgabef(spielfigur, spielfigur.typ);
		break;
    }
}
