// Gisela Neira
// C++ Basics E228
// * Programm 03.03.02 der C/C++ Programmierung
// * while-Schleife

#include <iostream>

#define LONG 101



int main(){

	char text[LONG];
    int i=0, b=0, z=0, a=0, d=0;

    std::cout << "Buchstaben und Zahlen eingeben. H\u00f6""chstens " <<  LONG-1 << " Zeichen." << std::endl;
    std::cout << "Keine besondere Zeichen wie: \u00f6, \u00fc, \u00e4 und \u00df, eingeben." << std::endl;
    std::cout << "> " << std::endl;
    std::cin.getline(text, sizeof(text));
    std::cout << "Wie interessant ist Ihr Text!: " << text << std::endl;

    do{
			if(isalpha(text[i]))
			{ b++; }
			if(isdigit(text[i]))
			{ a++; }
		i++;
    }while(text[i] != 0x00);

    std::cout << "Oh! Das sind ganze Buchstaben!" << b << std::endl;
    std::cout << "Oh! Das sind ganze Zahlen!" << a << std::endl;

return 0;
}
