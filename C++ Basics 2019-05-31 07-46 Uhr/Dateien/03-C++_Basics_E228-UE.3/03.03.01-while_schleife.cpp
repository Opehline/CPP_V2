// Gisela Neira
// C++ Basics E228
// * Programm 03.03.01 der C/C++ Programmierung
// * while-Schleife

#include <iostream>

#define LONG 21



int main(){

	char text[LONG];
    int i=0, b =0,a = 0;

    std::cout << "Buchstaben und Zahlen eingeben. Hoechstens " <<  LONG-1 << " Zeichen." << std::endl;
    std::cout << "Keine besondere Zeichen wie: \u00f6, \u00fc, \u00e4 und \u00df, eingeben." << std::endl;
    std::cout << "> " << std::endl;
    std::cin.getline(text, sizeof(text));
    std::cout << "Wie interessant ist Ihr Text!: " << text<< std::endl;

	// * Vergleichen mit der for-Schleife die das selbe tut.
    while(text[i] != 0x00)
    {
		if(isalpha(text[i])) // erkennt Buchstaben
			{ b++; }
		if(isdigit(text[i]))  //erkennt Ziffern
			{ a++; }
		i++;
    }

    std::cout << "Oh! Das sind ganze Buchstaben!" << b << std::endl;
    std::cout << "Oh! Das sind ganze Zahlen!" << a << std::endl;

return 0;
}
