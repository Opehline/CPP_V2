// Gisela Neira// C++ Basics E228
// * Programm 04.01.01 der C/C++ Programmierung
// * Array: Eingabe von Werten, Initialisierung, Austausch von Werten

#include <iostream>


int main(int argc, char **argv)
{
    // * Initialisierung eines int-Arrays
    int a[20] = {5, 6, 4, 17, 22, 14}; // * int a[20] = {0};
    // * Deklarierung eines char-Arrays
    char b[31]/*="Ein sehr toller Text"*/;

	#if 0
		// * a-Array wird ausgegeben
		std::cout <<"a[0]: " << a[0] << "\n";
		std::cout <<"a[1]: " << a[1] << "\n";
		std::cout <<"a[2]: " << a[2] << "\n";
		std::cout <<"a[3]: " << a[3] << "\n";
		std::cout <<"a[4]: " << a[4] << "\n";
		std::cout <<"a[5]: " << a[5] << "\n";
		std::cout <<"a[8]: " << a[8] << "\n";
		std::cout <<"a[19]: " << a[19] << "\n";	// * Letzte Stelle des Arrays
		std::cout <<"a[22]: " << a[22] << "\n";	// * Ausserhalb des Arrays
	#endif

	#if 0
		// * Austauschen von Elementen des a-Arrays
		// * Element 3 soll mit Element 4 vertauscht
		// * werden.
		std::cout <<"Vor vertauchen von a[2]: " << a[2] << "\n";
		std::cout <<"Vor vertauchen von a[3]: " << a[3] << "\n";
		std::cout <<"\nVor belegen von a[11]: " << a[11] << "\n";
		a[11] = a[2];
		a[2] = a[3];
		a[3] = a[11];
		std::cout <<"Nach vertauchen von a[2]: " << a[2] << "\n";
		std::cout <<"Nach vertauchen von a[3]: " << a[3] << "\n";
		std::cout <<"\nNach belegen von a[11]: " << a[11] << "\n";	// *  Sollte geleert werden
	#endif

	#if 0
		// * Zuweisung eines Wertes im Element 7 des a-Arrays
		a[6] = a[3]*2;
		std::cout <<"a[6]:" << a[6] << "\n";
	#endif

	#if 1
		// * Zugriff auf die Elemente der String-Arrays
		// * Einlegen von Werten ins b-Array
		b[0] = 'C';
		b[1] = '/';
		b[2] = 'C';
		b[3] = '+';
		b[4] = '+';
		//b[5] = '0';
		b[5] = '\0';     // Mit \0 (Terminator wird die Eingabe
                        // des Strings terminiert.
		//b[13] = '\0';

	#endif

	#if 1
		// * Ausgabe der eingegeben Werte des b-Array
		std::cout << b[0] << "\n";
		std::cout << b[1] << "\n";
		std::cout << b[2] << "\n";
		std::cout << b[3] << "\n";
		std::cout << b[4] << "\n";
		std::cout << b[5] << "\n"; // \0 Wird nicht ausgegeben!
		std::cout << b[7] << "\n";
		std::cout << b[10] << "\n";
	#endif

return 0;
}
