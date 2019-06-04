// Gisela Neira
// C++ Basics E228
// * Programm 02.02.01 der C/C++ Programmierung
// * define-Konstante.

#include <stdio.h>

// * Wert aendern und Resultate auf Bildschirm sehen
#define WERT 1 // so Konstante, ohne "1" wäre es ein Schalter

void eineFunk()
{
    int was=WERT;
    printf("%i", was);
    //#define WERT 5
    //...................
}

int main(int argc, char **argv)
{

	//#define WERT 3 	// * Möglich?

    float errPunktzahl=0; 	// * Initialisierung mit 0
    double punktzahl[WERT];
    int i=0;
    // std::string WERT; // Wäre dumm, weil auch hier Wert ersetzt würde. Compilerfehler.

    eineFunk();            // * Welcher Wert wird ausgegeben?

	for(i=0; i<WERT; i++) // * 0, 1, 2
    {
		printf("Punktzahl eingeben! ");
		scanf("%lf", &punktzahl[i]);
		printf("Sie habenb ups < %.2f %% > erreicht.\n\n", (punktzahl[i]/WERT)*100);
    }



  	errPunktzahl = 14;
  	printf("Sie haben < %.2f %% > erreicht.\n\n", (errPunktzahl/WERT)*100);
    errPunktzahl = 13;
    printf("Sie haben < %.2f %% > erreicht.\n\n", (errPunktzahl/WERT)*100);
    errPunktzahl = 8;
    printf("Sie haben < %.2f %% > erreicht.\n\n", (errPunktzahl/WERT)*100);
    errPunktzahl = 12;
    printf("Sie haben < %.2f %% > erreicht.\n\n", (errPunktzahl/WERT)*100);
    errPunktzahl = 3;
    printf("Sie haben < %.2f %% > erreicht.\n\n", (errPunktzahl/WERT)*100);

return 0;
}
