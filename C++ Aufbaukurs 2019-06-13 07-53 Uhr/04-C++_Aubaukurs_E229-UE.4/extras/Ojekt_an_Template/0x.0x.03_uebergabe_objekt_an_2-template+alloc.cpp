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
    IST_RITTER, IST_ZAUBERER, IST_FEE    
};

class Held
{
    protected: 
	short int lebenskraft;
	std::string typWaffe;
	float power;
	std::string name;

    public:
	Held()
	{
	    lebenskraft = 50;
	    typWaffe = "Keine";
	    power = 80;
	    name="";
	}

	void setAll(short int _lebenskraft, std::string _typWaffe, float _power, std::string _name)
	{
	    lebenskraft = _lebenskraft;
	    typWaffe = _typWaffe;
	    power = _power;
	    name = _name;
	}

	short int getLebenskraft()
	{ return lebenskraft; }
	std::string getTypWaffe()
	{ return typWaffe;}
	float getPower()
	{ return power; }
	std::string getName()
	{ return name; }
};

class Ritter : public Held
{
    private:
	std::string kampfart;
    public:
	Ritter()
	{
	    kampfart = "Noch keins erlernt.";
	}
	void setRitter(std::string _kampfart)
	{
	    kampfart = _kampfart;
	}
	std::string getRitter()
	{
	    return kampfart;
	}
};

class Zauberer : public Held
{
    protected:
	std::string magieart;
    public:
	Zauberer()
	{
	    magieart = "Blitz";
	}
	void setZauberer(std::string _magieart)
	{ 
	    magieart = _magieart;
	}
	std::string getZauberer()
	{ return magieart; }

};

class Fee : public Zauberer
{
    private:
	std::string magieartAlternativ;
    public:
	Fee()
	{
	    magieartAlternativ = "Hypnose";   
	}
	void setFee(std::string _magieartAlternativ)
	{
	    magieartAlternativ = _magieartAlternativ;    
	}
	std::string getFee()
	{ return magieartAlternativ;}
};

class Kampf
{
    public:
	Ritter ritter1;
	Zauberer zauberer1;
	Fee fee1;

	Typ werHatDenHeldenhaftenKampfGewonnen()
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
};

class Sieger
{
    public:
	enum Typ typ;
	Kampf einKampf;
	
	void resultatKampf(Sieger *sieger);

	template<typename KlasseObject> 
	KlasseObject siegerAusgabe(KlasseObject meinSieger)
	{
	    std::cout << "\nSieger ist " <<  meinSieger.getName() << "!\n" <<  std::endl;
	    return meinSieger;
	}
};

class Ausgabe
{
	public:

	template<typename KlasseObject, typename TypObjekt> 
	void ausgabef(KlasseObject *ausgebenObjekt, TypObjekt typ)
	{
		switch(typ)
		{
			case 0:
				std::cout << "******Lebenskfraft von Ritter>" << ausgebenObjekt->einKampf.ritter1.getLebenskraft() << std::endl;
				break; 
			case 1:
				std::cout << "******Lebenskfraft von Zauberer>" << ausgebenObjekt->einKampf.zauberer1.getLebenskraft() << std::endl;
				break;
			case 2:
				std::cout << "******Lebenskfraft von Fee>" << ausgebenObjekt->einKampf.fee1.getLebenskraft() << std::endl;
				break;
			default: exit(0);
		}
	}
};

int main(int argc, char **argv)
{
    Sieger *figur01 = new Sieger;
	Ausgabe ausgabe;

    // * Auf diesem Bereich kann in der Laufzeit agiert werden.
    figur01->typ = figur01->einKampf.werHatDenHeldenhaftenKampfGewonnen();
	ausgabe.ausgabef(figur01, figur01->typ);
    figur01->resultatKampf(figur01);
	ausgabe.ausgabef(figur01, figur01->typ);

	delete figur01;
	// * Wird hier nicht mehr ausgegeben, weil Objekt nicht mehr vorhanden ist:
	ausgabe.ausgabef(figur01, figur01->typ);

return 0;
}



void Sieger::resultatKampf(Sieger *spielfigur)
{
    switch(spielfigur->typ)
    {
	case IST_RITTER:
	// * Hier wird ein Ritter erstellt
	spielfigur->einKampf.ritter1.setAll(190, "Schwert", 35.5, "Ritter");
	spielfigur->einKampf.ritter1.setRitter("mutig");
	spielfigur->siegerAusgabe(spielfigur->einKampf.ritter1);
	
	break;
	case IST_ZAUBERER:
	// * Hier wird ein Zauberer erstellt
	spielfigur->einKampf.zauberer1.setAll(390, "SturmStab", 180.5, "Zauberer");
	spielfigur->einKampf.zauberer1.setZauberer("WetterBeherscher");
	spielfigur->siegerAusgabe(spielfigur->einKampf.zauberer1);
	break;

	case IST_FEE:
	// * Hier wird ein Fee erstellt
	spielfigur->einKampf.fee1.setAll(1290, "LichtStab", 893.5, "Fee");
	spielfigur->einKampf.fee1.setFee("Heilung");
	spielfigur->einKampf.zauberer1.setZauberer("Telekinese");
	spielfigur->siegerAusgabe(spielfigur->einKampf.fee1);
	break;
    }
}
