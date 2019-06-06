// Gisela Neira
// C++ Basics E228
// * Programm 06.02.07 der C/C++ Programmierung
// * Union + Class

#include <iostream>

enum Typ
{
    IST_ZITRONE=1, IST_APFEL=2, IST_BIRNE=3    
};

#define GELB 1
#define GRUEN 2
#define BRAUN 3

#define SAUER '*'
#define SAUERSUESS '+'
#define SUESS '-'
#define BITTER 'x'

class Frucht
{
	public:
	    short int farbe;
	    char geschmack;
	    float gewicht;
	    
	    Frucht();
};

struct Zitrone : public Frucht
{
	public:	    
	    Zitrone();
	    void zitronenFunktion();
};


class Apfel : public Frucht
{
	public:
		Apfel();
};

class Birne : public Frucht
{
	public:
		Birne();
};

union Fruechte
{ /*_________________________*/ 
    class Zitrone zitrone1;
    class Apfel apfel1;
    class Birne birne1;
    Fruechte();
};

class Einefrucht
{
	public:
		Einefrucht();
	    enum Typ typ;
	    union Fruechte frucht;
};


Frucht::Frucht()
{
}
Fruechte::Fruechte()
{
	std::cout << "Fruechte sind erstellt"
	          << std::endl;
}
Einefrucht::Einefrucht()
{
}
Birne::Birne()
{	
	std::cout << "Eine Birne ist erstellt"
		      << std::endl;
}
Apfel::Apfel()
{
	std::cout << "Eine Apfel ist erstellt"
		      << std::endl;
}
Zitrone::Zitrone()
{
	std::cout << "Eine Zitrone ist erstellt"
			  << std::endl;
}

void Zitrone::zitronenFunktion()
{
	std::cout << "Es wurde eine leckere Zitrone gekauft"
	 		  << std::endl;
}

void erstelle_frucht(class Einefrucht frucht);
Typ kundeKauft(class Einefrucht frucht);


int main()
{
    class Einefrucht frucht1;
    frucht1.typ = kundeKauft(frucht1); // Zur Laufzeit
    erstelle_frucht(frucht1);
return 0;
}

Typ kundeKauft(class Einefrucht frucht)
{
	int kauf=0;
	
	std::cout << "Was moechten Sie kaufen? >";
	std::cin >> kauf;
	
	switch(kauf)
    {
		case IST_ZITRONE: // 1 
			return IST_ZITRONE;
			break;
	
		case IST_APFEL:  // 2
			return IST_APFEL;
			break;
	
		case IST_BIRNE:  // 3
			return IST_BIRNE;
			break;
    }
}


void erstelle_frucht(class Einefrucht frucht1)
{
    
    switch(frucht1.typ)
    {
	case IST_ZITRONE:
		// * Hier wird ein Zitrone erstellt
		frucht1.frucht.zitrone1.farbe = GELB;
		frucht1.frucht.zitrone1.geschmack= SAUER;
		frucht1.frucht.zitrone1.gewicht= 25.5;
		// * Hier wird die erstellte Zitrone ausgegeben 
		std::cout << "\nFabe Zitrone: " << frucht1.frucht.zitrone1.farbe << std::endl;
		std::cout << "Gewicht Zitrone: " << frucht1.frucht.zitrone1.gewicht << std::endl;
		std::cout << "Geschmack Zitrone: " << frucht1.frucht.zitrone1.geschmack << std::endl;
		frucht1.frucht.zitrone1.zitronenFunktion();
	break;

	case IST_APFEL:
		// * Hier wird ein Apfel erstellt
		frucht1.typ = IST_APFEL;
		frucht1.frucht.apfel1.farbe = GRUEN;
		frucht1.frucht.apfel1.geschmack= SAUERSUESS;
		frucht1.frucht.apfel1.gewicht= 22.35;
		// * Hier wird die erstellte Apfel ausgegeben 
		std::cout << "\nFarbe Apfel: " << frucht1.frucht.apfel1.farbe << std::endl;
		std::cout << "Gewicht Apfel: " << frucht1.frucht.apfel1.gewicht << std::endl;
		std::cout << "Geschmack Apfel: " << frucht1.frucht.apfel1.geschmack << std::endl;
	break;

	case IST_BIRNE:
		// * Hier wird ein Birne erstellt
		frucht1.typ = IST_BIRNE;
		frucht1.frucht.birne1.farbe = BRAUN;
		frucht1.frucht.birne1.geschmack= SUESS;
		frucht1.frucht.birne1.gewicht= 15.3;
		// * Hier wird die erstellte Birne ausgegeben 
		std::cout << "\nFarbe Birne: " << frucht1.frucht.birne1.farbe << std::endl;
		std::cout << "Geschmack Birne: " << frucht1.frucht.birne1.geschmack << std::endl;
		std::cout << "Gewicht Birne: " << frucht1.frucht.birne1.gewicht << std::endl;
	break;
    }
}

