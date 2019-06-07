// Gisela Neira
// C++ Basics E228
// * Programm 02.02.05 der C/C++ Programmierung
// * Lebenzuklus einer define-Konstante?
// * Vergleich mit einer const-Konstante.

#include <iostream>
#include<stdio.h>

// * Wert aendern und Resultate auf Bildschirm sehen
//#define WERT 3
//const int WERT = 3;

void ausgabe();

int main(int argc, char **argv)
{

	//#define WERT 3 		// * Wird #-Konstante von der Funktion ausgabe() erkannt?
	const int WERT = 3;		// * Wird const-diese Konstante von der Funktion ausgabe() erkannt?

    float errPunktzahl=0; 	// * Initialisierung mit 0
    double punktzahl[WERT];
    int i=0; 				// * Initialisierung mit 0

	for(i=0; i<WERT; i++) // * 0, 1, 2
    {
		printf("Punktzahl eingeben! ");
		scanf("%lf", &punktzahl[i]);
		printf("Sie habenb ups < %.2f %% > erreicht.\n\n", (punktzahl[i]/WERT)*100);
    }

	ausgabe();

return 0;
}

void ausgabe()
{
	int i=0;

    float a[WERT]; 				// * Einsetzen der const-Konstante

    for(i=0; i<WERT; i++)		// * Einsetzen der const-Konstante
    {
    	std::cout << "> ";
		std::cin >> a[i];
		fflush(stdin);
    }
    for(i=0; i<WERT; i++)		// * Einsetzen der const-Konstante
    {
		std::cout << "Eingegebener Wert: " << i << " > "<<  a[i] << std::endl;
	}
}
