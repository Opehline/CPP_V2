// Gisela Neira
// C++ Basics E228
// * Programm 03.02.04 der C/C++ Programmierung
// * for-Schleife: trennen von Eingabeelementen
// * Summe von Werte eines strings-Arrays
// * ASCI Code Tabelle: https://www.braingle.com/brainteasers/codes/ascii.php

#include <iostream>
#include <ctype.h>
#include <stdlib.h>

#define LONG 21


int main(int argc, char **argv)
{

    char text[LONG]={0}, buchstab[LONG]={0};
    int num[LONG]={0}, sum=0;
    int i=0, a = 0;

    std::cout << "Buchstaben und Zahlen eingeben. Hoechstens 20 Zeichen.\n" << std::endl;
    std::cout << "Keine besondere Zeichen eingeben.\n" << std::endl;
    std::cout << "> ";
    std::cin >> text;
    std::cin.clear();
    std::cout << "Wie interessant ist Ihr Text!:" << text << std::endl;

    for(i=0, a; i<LONG; ++i)
    {
		if(text[i] != 0x00)
		{
			 if(isdigit(text[i]))
			 {
				num[a] = text[i];
				sum += num[a]/*-48*/;	// * Korrektur wegen ASCII-Code
				//std::cout << "Sume: %i\n", sum);
				a++;
			 }
		}
		else break;
    }

    std::cout << "Oh! Das sind ganze " << a << " Zahlen!" << std::endl;
    std::cout << "Summe: " << sum << std::endl;

return 0;
}
