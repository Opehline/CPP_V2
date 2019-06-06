// Gisela Neira
// C++ Basics E228
// * Programm 06.02.03 der C/C++ Programmierung
// * Union verwalten - define

#include <iostream>

#define IST_ZITRONE 1
#define IST_APFEL 2
#define IST_BIRNE 3

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
    int typ;
    union Fruechte frucht;
};



int main(int argc, char **argv)
{
        
    struct Einefrucht frucht1;
    
    // * Hier wird ein Zitrone erstellt
    frucht1.typ = IST_ZITRONE;
    frucht1.frucht.zitrone1.farbe = GELB;
    frucht1.frucht.zitrone1.geschmack= SAUER;
    frucht1.frucht.zitrone1.gewicht= 25.5;

    // * Hier wird ein Apfel erstellt
    frucht1.typ = IST_APFEL;
    frucht1.frucht.apfel1.farbe = GRUEN;
    frucht1.frucht.apfel1.geschmack= SAUERSUESS;
    frucht1.frucht.apfel1.gewicht= 22.35;

    // * Hier wird ein Birne erstellt
    frucht1.typ = IST_BIRNE;
    frucht1.frucht.birne1.farbe = BRAUN;
    frucht1.frucht.birne1.geschmack= SUESS;
    frucht1.frucht.birne1.gewicht= 15.3;

   std::cout << "\nFabe Zitrone: " << frucht1.frucht.zitrone1.farbe << std::endl;
   std::cout << "Gewicht Zitrone: " << frucht1.frucht.zitrone1.gewicht << std::endl;
   std::cout << "Geschmack Zitrone: " << frucht1.frucht.zitrone1.geschmack << std::endl;

   std::cout << "\nFarbe Apfel: " << frucht1.frucht.apfel1.farbe << std::endl;
   std::cout << "Gewicht Apfel: " << frucht1.frucht.apfel1.gewicht << std::endl;
   std::cout << "Geschmack Apfel: " << frucht1.frucht.apfel1.geschmack << std::endl;

   std::cout << "\nFarbe Birne: " << frucht1.frucht.birne1.farbe << std::endl;
   std::cout << "Geschmack Birne: " << frucht1.frucht.birne1.geschmack << std::endl;
   std::cout << "Gewicht Birne: " << frucht1.frucht.birne1.gewicht << std::endl;



return 0;
}
