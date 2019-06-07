// Gisela Neira
// C++ Basics E228
// * Programm 03.02.03 der C/C++ Programmierung
// * for-Schleife mit interner Initialisierung der
// * Zähler

#include <iostream>
#include <ctype.h>

#define LONG 21

int main(int argc, char **argv)
{

    char text[LONG]/*={0}*/;
    int i=0, b=0, z=0;

    std::cout << "Buchstaben und Zahlen eingeben. Hoechstens 20 Zeichen." << std::endl;
    std::cout << "Besondere Zeichen nicht eingeben." << std::endl;
    std::cout << "> ";
    std::cin.getline(text, sizeof(text));
    std::cin.clear();
    std::cout << "Wie interessant ist Ihr Text!: " << text << std::endl;

    for(i=0, b=0, z=0; i<LONG; ++i)
    {
        #if 0
            if(isalpha(text[i])) // * Bewertet ob Eintrag ein Buchstabe ist
            {b++;}
            if(isdigit(text[i])) // * Bewertet ob Eintrag eine Ziffer ist
            {z++;}
        #endif // 0
        #if 0
            if(text[i] != 0x00)
            {
                 if(isalpha(text[i])) // * Bewertet ob Eintrag ein Buchstabe ist
                 {b++;}
                 if(isdigit(text[i])) // * Bewertet ob Eintrag eine Ziffer ist
                 {z++;}
            }
            else break;
		#endif // 0

    }

    std::cout << "Oh! Das sind ganze " << b << " Buchstaben!" << std::endl;
    std::cout << "Oh! Das sind ganze " << z << " Zahlen!\n" << std::endl;

return 0;
}
