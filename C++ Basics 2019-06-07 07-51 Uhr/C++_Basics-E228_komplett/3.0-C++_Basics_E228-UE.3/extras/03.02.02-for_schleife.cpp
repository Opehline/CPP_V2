// Gisela Neira
// C++ Basics E228
// * Programm 03.02.02 der C/C++ Programmierung
// * for-Schleife: array-Ausgabe

#include <iostream>
#include <ctype.h>

#define LONG 21

int main(int argc, char **argv)
{

    char text[LONG];
    int i=0;

    std::cout << "Buchstaben und Zahlen eingeben. Hoechstens 20 Zeichen." << std::endl;
    std::cout << "> ";
    std::cin.getline(text, sizeof(text));
    std::cin.clear();
    std::cout << "Wie interessant ist Ihr Text!: " << text << std::endl;

    for(i=0; i<LONG; i++) // * i++ = ++i
    {
        std::cout << "Text als array-Ausgabe: " << text[i] << std::endl;
        #if 0
		if(text[i] != 0x00) // * Eine hexadecimale Null (auch eine richtige Null)
		{
    		std::cout << "Text als array-Ausgabe: " << text[i] << std::endl;
		}
		else break;
		#endif // 0
    }

return 0;
}
