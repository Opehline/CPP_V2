// Gisela Neira
// C++ Basics E228
// * Programm 03.02.01 der C/C++ Programmierung
// * For-Schleife mit einem counter

#include <iostream>
#include <locale.h>

#define LONG 21 // Präprozessorkonstante

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "de_DE.UTF-8");
    //const int LONG=21;

    char text[LONG];
    int i=0, w = 0;

    std::cout << "Text mit hoechstens 20 Zeichen eingeben ." << std::endl;
    std::cout << ">  ";
    std::cin.getline(text, sizeof(text));
    std::cin.clear();
    std::cout << "Wie interessant ist Ihr Text!: " << text << std::endl;

    for(i=0; i<LONG; i++)
    {
		if(text[i] != 0x00) // * Eine hexadecimale Null (auch eine richtige Null)
		{w++;}
		else break;
    }

    std::cout << "Oh! Ihr Text war " << w << " Zeichen lang!" << std::endl;

return 0;
}
