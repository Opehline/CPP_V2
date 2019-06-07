// Gisela Neira
// C++ Basics E228
// * Programm 06.02.04 der C/C++ Programmierung
// * Union verwalten - enum

#include <iostream>

using namespace std;

enum Typ
{
    IST_ZITRONE, IST_APFEL, IST_BIRNE    
};

#define GELB 1
#define GRUEN 2
#define BRAUN 3

#define SAUER '*'
#define SAUERSUESS '+'
#define SUESS '-'
#define BITTER 'x'


/*
    Geschmack
    * = sauer
    + = sauer oder suess
    s = suess
    x = bitter

*/


struct Zitrone
{
    short int farbe;
    char geschmack;
    float gewicht;
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
{
    struct Zitrone zitrone1;
    struct Apfel apfel1;
    struct Birne birne1;
};

struct Einefrucht
{
    enum Typ typ;
    union Fruechte frucht;
};



int main(int argc, char **argv)
{
        
    struct Einefrucht frucht;
    
    // * Hier wird ein Zitrone erstellt
    frucht.typ = IST_ZITRONE;
    frucht.frucht.zitrone1.farbe = GELB;
    frucht.frucht.zitrone1.geschmack= SAUER;
    frucht.frucht.zitrone1.gewicht= 25.5;

    // * Hier wird ein Apfel erstellt
    frucht.typ = IST_APFEL;
    frucht.frucht.apfel1.farbe = GRUEN;
    frucht.frucht.apfel1.geschmack= SAUERSUESS;
    frucht.frucht.apfel1.gewicht= 22.35;

    // * Hier wird ein Birne erstellt
    frucht.typ = IST_BIRNE;
    frucht.frucht.birne1.farbe = BRAUN;
    frucht.frucht.birne1.geschmack= SUESS;
    frucht.frucht.birne1.gewicht= 15.3;

    std::cout << "\nFabe Zitrone: " << frucht.frucht.zitrone1.farbe << std::endl;
    std::cout << "Gewicht Zitrone: " <<  frucht.frucht.zitrone1.gewicht << std::endl;
    std::cout << "Geschmack Zitrone: " << frucht.frucht.zitrone1.geschmack << std::endl;

    std::cout << "\nFarbe Apfel: " << frucht.frucht.apfel1.farbe << std::endl;
    std::cout << "Gewicht Apfel: " <<  frucht.frucht.apfel1.gewicht << std::endl;
    std::cout << "Geschmack Apfel: " << frucht.frucht.apfel1.geschmack << std::endl;

    std::cout << "\nFarbe Birne: " << frucht.frucht.birne1.farbe << std::endl;
    std::cout << "Gewicht Birne: " <<  frucht.frucht.birne1.gewicht << std::endl;
	std::cout << "Geschmack Birne: " << frucht.frucht.birne1.geschmack << std::endl;



return 0;
}
