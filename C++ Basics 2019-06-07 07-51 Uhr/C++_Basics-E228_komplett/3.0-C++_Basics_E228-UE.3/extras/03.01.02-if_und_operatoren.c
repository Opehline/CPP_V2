// Gisela Neira
// C++ Basics E228
// * Programm 03.01.02 der C/C++ Programmierung
// * if-Verzweigung und austausch von Variablenwerten

#include <stdio.h>
#define nVar(nVar) #nVar

int main(int argc, char **argv)
{
    // * Ein- und auskommentieren
    int a = 5, b = 3;
    //int a = 3, b = 5;
    int swap=0; 	// * Initialisierung weare in diesem Fall nicht notwendig

    if(a>b)
    {
		printf("%s=%i,  %s=%i\n", nVar(a), a, nVar(b), b);
		swap = a; // swap = 5
		a = b;    // a = 3;
		b = swap; // b = 5
		printf("Nun hat %s den Wert von %s. %s=%i, %s=%i\n", nVar(b), nVar(a), nVar(b), b, nVar(a), a);
    }
    //printf("Nun hat %s den Wert von %s. %s=%i, %s=%i\n", nVar(b), nVar(a), nVar(b), b, nVar(a), a);
    else if(b>a)
    {
		printf("%s=%i,  %s=%i\n", nVar(a), a, nVar(b), b);
		swap = a; // swap = 3
		a = b;    // a = 5;
		b = swap; // b = 3
		printf("Nun hat %s den Wert von %s. %s=%i, %s=%i\n", nVar(b), nVar(a), nVar(b), b, nVar(a), a);
    }

return 0;
}
