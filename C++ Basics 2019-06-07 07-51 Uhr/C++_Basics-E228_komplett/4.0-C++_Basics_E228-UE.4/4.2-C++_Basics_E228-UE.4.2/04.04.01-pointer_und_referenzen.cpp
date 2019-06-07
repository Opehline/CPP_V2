// Gisela Neira
// C++ Basics E228
// * Programm 05.04.01 der C/C++ Programmierung
// * Pointer und Referenzen

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>

int main()
{


    /*
    virtueller Name			Speicherplaz			realer Name in Hexadecimalsystem
	(konstant)				(bezieht sich			(variabel)
							auf dem Anfang)
	---------------------------------------------------------------------------------------------


    *pointer_zahl			|0x7ffdb2bebda4|    	0x7ffde9a29f00
	 						|--------------|
							|--------------|
							|--------------|
    zahl					|      5       |    	0x7ffdb2bebda4

    */

	#if 0
    int zahl = 5;
    int* pointer_zahl = NULL;		// Leerer Pointer. Es wird der pointer pointer_zahl deklariert und mit NULL initialisiert.
    pointer_zahl = &zahl;			// Es wird die Adresse von der Zahl 5 in "Zahlen" gelegt.
									// &-Operator gib nicht den Wert sondern den realen Namen
									// im Speicherplatz zurueck.

		std::cout << "\nZahlen:" << std::endl;
		// * Gibt den Wert 5 wieder
		std::cout << "zahl: " << zahl << std::endl;	// Dieser Wert bleib immer konstant.

	    // * Gibt die Adress des momentan freigelegten
		// * Spreicher fuer zahl wieder.
		std::cout << "&zahl: " << &zahl << std::endl;

		// *Gibt die Adresse des momentanen Platzes auf
		// * der die 5 gespeichter wurde.
		std::cout << "pointer_zahl (Adresse von zahl): " << pointer_zahl << std::endl;	// Dieser Wert aendert sich bei jeden neuen Aufruf.

		std::cout << "Dereferenzierung: " << *pointer_zahl << std::endl;

		// * Ausgabe von &zahl und *zahlen muss gleich sein!
		// * Gibt die Adress des momentan freigelegten
		// * Spreicher fuer zahlen wieder.
		std::cout << "&pointer_zahl: " << &pointer_zahl << std::endl;	// Dieser Wert aendert sich bei jeden neuen Aufruf.
					// Die Werte aendern sich, da es um im Moment frei
					// vorhanden Speicher geht. Der Speicher der vorher
					// frei war, kann inzwischen beim naechsten Aufruf
					// belegt worden sein, von anderen laufenden Programmen
					// oder dem OS. Den zu verwendeten Speicher wird vom
					// Compiler bestimmt.
	#endif

	#if 0
		// * Der Pointer hat immer den selben Datentyp als Variable auf die es
		// * zeigt. Im Anhang Beispiele mit char-Variablen.
		// * char-Variablen fuer Zeichen

	char zeichen = '5';
	//char* pointer_zeichen = NULL;		// * Leerer Pointer. Es wird der pointer pointer_zahl deklariert.
	char* pointer_zeichen = &zeichen;

		std::cout << "\nZeichen:" << std::endl;
		std::cout << "zeichen: " << zeichen << std::endl;
		std::cout << "&zeichen: " << static_cast<void *>(&zeichen) << std::endl;
		std::cout << "&zeichen: " << &zeichen << std::endl;
		std::cout << "pointer_zeichen: " << static_cast<void *>(pointer_zeichen) << std::endl;
		std::cout << "*pointer_zeichen: " << *pointer_zeichen << std::endl;
		std::cout << "&pointer_zeichen: " << &pointer_zeichen << std::endl;
	#endif

	#if 0
		// * char-Variablen fuer std::strings
		char kette[11] = "eine Kette";
		char *pointer_kette = &kette[0]; // * == kette

		std::cout << "\nString:" << std::endl;
		std::cout << "kette: " << kette << std::endl;
		std::cout << "&kette: " << &kette << std::endl;
		std::cout << "pointer_kette: " << static_cast<void *>(pointer_kette) << std::endl;
		//std::cout << "(Falsch denn C-Style) *pointer_kette: " << &kette[0] << std::endl; // Funktioniert mit printf()
		std::cout << "&pointer_kette: " << &pointer_kette << std::endl;
	#endif

    float a[5];
    /*
	 Es wurden fuenf mal 4 Byte (8 Byte) Speicherplaetze reserviert, mit nur einem
	 Variablennamen. (Hexadecimalsystem: 0 1 2 3 4 5 6 7 8 9 a b c d e f) // * duale System

	 a		|--------------|   0x7fff0db19ce0 // Mit neuem Index sagen
			|--------------|   0x7fff0db19ce4 // wir dem Programm:
			|--------------|   0x7fff0db19ce8 // "springt 4 weiter."
			|--------------|   0x7fff0db19cec
			|--------------|   0x7fff0db19cf0
    */

	#if 1
		std::cout << &a[0] << std::endl;	// 0x7fff0db19ce0
		std::cout << &a[1] << std::endl;	// 0x7fff0db19ce4
		std::cout << &a[2] << std::endl;	// 0x7fff0db19ce8
		std::cout << &a[3] << std::endl;	// 0x7fff0db19cec
		std::cout << &a[4] << std::endl;	// 0x7fff0db19cf0
	#endif
        //std::cout << sizeof(a) << std::endl;
}
