#include "Kampf.hpp"

Typ Kampf::werHatDenHeldenhaftenKampfGewonnen()
{
	int wahl=0;
	std::cout << "Wer hat den heldenhaften Kampf gewonnen?" << std::endl;
	std::cin >> wahl;

		switch(wahl)
		{
			case 1:
				return IST_RITTER;
				break; // * Nicht noetig, aber schoener Code.
			case 2:
				return IST_ZAUBERER;
				break;
			case 3:
				return IST_FEE;
				break;
			default: exit(0);
		}
	}


void Sieger::resultatKampf(Sieger& spielfigur)
{
    switch(spielfigur.typ)
    {
		case IST_RITTER:
		// * Hier wird ein Ritter erstellt
		spielfigur.einKampf.ritter1.setAll(190, "Schwert", 35.5, "Ritter");
		spielfigur.einKampf.ritter1.setRitter("mutig");
		spielfigur.siegerAusgabe(spielfigur.einKampf.ritter1);
		ausgabe.ausgabef(einKampf.ritter1);
		
		break;
		case IST_ZAUBERER:
		// * Hier wird ein Zauberer erstellt
		spielfigur.einKampf.zauberer1.setAll(390, "SturmStab", 180.5, "Zauberer");
		spielfigur.einKampf.zauberer1.setZauberer("WetterBeherscher");
		spielfigur.siegerAusgabe(spielfigur.einKampf.zauberer1);
		ausgabe.ausgabef(einKampf.zauberer1);
		break;
	
		case IST_FEE:
		// * Hier wird ein Fee erstellt
		spielfigur.einKampf.fee1.setAll(1290, "LichtStab", 893.5, "Fee");
		spielfigur.einKampf.fee1.setFee("Heilung");
		spielfigur.einKampf.zauberer1.setZauberer("Telekinese");
		spielfigur.siegerAusgabe(spielfigur.einKampf.fee1);
		ausgabe.ausgabef(einKampf.fee1);
		break;
    }
}

template<typename KlasseObject> 
KlasseObject Sieger::siegerAusgabe(KlasseObject& meinSieger)
{
    std::cout << "\nSieger ist " <<  meinSieger.getName() << "!\n" <<  std::endl;
    return meinSieger;
}


