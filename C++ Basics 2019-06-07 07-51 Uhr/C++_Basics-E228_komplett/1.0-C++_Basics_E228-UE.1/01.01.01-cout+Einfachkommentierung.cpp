// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.01.01 der C/C++ Programmierung
// * Ausgabe eines Textes und Kommentieren einer Zeile
// * Zeilen werden mit dem Operator // kommentiert.

#include <iostream> // * Bibliothek C++ fuer Stream-Objekte: cout, cerr, clog und cin.
#include <stdio.h>  // * Bibliothek C fuer Input-Output Funktionen z.B. getchar()

using namespace std;// * Namensraum fuer Std

int main()
{
	// * Uebung: Folgende Zeilen sollen jeweils ein- und
	// * auskommentiert werden:
	// * Frage: Welche Zeilen sind in C++ und welche in
	// * C geschrieben?
	std::cout << "Ich will C/C++ lernen!" << std::endl;
	// * Warum gibt folgende Zeile eine Fehlermeldung?:
    cout << "Ich will C/C++ lernen!" << endl; // * endl: Neue Zeile. Wird entpuffert.
    //cout << "Na huch?\n"; // Neue Zeile. Wird nicht entpuffert*/

    // * Fuer C Programmierung
	printf("Ich will C/C++ lernen!\n");
	fflush(stdin); // * Entpuffert

return 0;
}
