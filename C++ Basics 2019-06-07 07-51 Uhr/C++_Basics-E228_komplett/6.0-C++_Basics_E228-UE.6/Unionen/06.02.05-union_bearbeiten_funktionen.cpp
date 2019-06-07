// Gisela Neira
// C++ Basics E228
// * Programm 06.02.05 der C/C++ Programmierung
// * Union verwalten - Uebergabe an Funktionen

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

struct Zitrone
{
    short int farbe;
    char geschmack;
    float gewicht;
    double form;
};

struct Apfel
{
    short int farbe;
    char geschmack;
    float gewicht;
};

struct Birne
{
    short int farbe;
    char geschmack;
    float gewicht;
};

union Fruechte
{ /*_________________________*/
    struct Zitrone zitrone1;
    struct Apfel apfel1;
    struct Birne birne1;
};

struct Einefrucht
{
    int typ;
    union Fruechte frucht;
};

void erstelle_frucht(struct Einefrucht frucht);


int main()
{
    struct Einefrucht frucht1;
    frucht1.typ = IST_BIRNE;
    erstelle_frucht(frucht1);
return 0;
}

void erstelle_frucht(struct Einefrucht frucht1)
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

