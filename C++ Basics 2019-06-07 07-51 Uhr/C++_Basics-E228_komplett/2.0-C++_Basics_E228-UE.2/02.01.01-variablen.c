// Gisela Neira
// C++ Basics E228
// * Programm 02.01.01 der C/C++ Programmierung
// * Wie eine Variable ihren Wert Aendern kann.

#include <stdio.h>

int main(int argc, char **argv)
{
    int a=0;  // * Reine Initialisierung

	printf("Neu deklarierte Variable a mit dem Wert: > %i\n", a);
    // * Beispiel 1
    // * a hat den Wert 5

    a = 5;
    printf("Neu deklarierte Variable a mit dem Wert: > %i\n", a);
    // * Nun hat a den Wert 3
    a = 3;
    printf("Neuer Wert von a durch Verweisung a = 3: > %i\n", a);

    // * Beispiel 2
    // * a nimmt wieder einen anderen Wert an
    a = 7;
    // * Eine Variable b wird neu deklaiert. (Man kann auch mitten im Programm eine Variable deklarieren.)
    int b=4;
    printf("Neu deklarierte Variable b mit dem Wert: > %i\n", b);
    // * Da b eine Variable ist, kann b auch gleichzeitig die Variable des Ergebnis sein.
    b = a * b; // * b = 7 * 4 => b=28;
    printf("Neuer Wert von b durch Multiplikation b = a * b: > %i\n", b);
/*	*/
return 0;
}
