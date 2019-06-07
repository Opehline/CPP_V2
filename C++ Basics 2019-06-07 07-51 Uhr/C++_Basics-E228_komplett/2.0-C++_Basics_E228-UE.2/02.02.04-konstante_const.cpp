// Gisela Neira
// C++ Basics E228
// * Programm 02.02.04 der C/C++ Programmierung
// * const-Konstante global in C++ Programmierung.

#include <iostream>
#include <stdio.h>

const int wert = 5;		// * Globale Konstante: weil auﬂerhalb jeder Funktion

void ausgabe();         // * Vorw‰rtsdeklaration der Funktion von Zeile 20

int main(int argc, char **argv)
{
    std::cout << wert << std::endl;
	ausgabe();
return 0;
}

void ausgabe()
{
    const int wert = 5;
    //wert = 7;
	int i=0;
    float a[wert]; 				// * Einsetzen der const-Konstante

    for(i=0; i<wert; i++)		// * Einsetzen der const-Konstante
    {
    	std::cout << "> ";
		std::cin >> a[i];
		fflush(stdin);
    }
    for(i=0; i<wert; i++)		// * Einsetzen der const-Konstante
    {
		std::cout << "Eingegebener Wert: " << i << " > "<<  a[i] << std::endl;
	}
}

