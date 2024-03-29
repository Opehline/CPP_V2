// Gisela Neira
// C++ Basics E228
// * Programm 05.04.02 der C/C++ Programmierung
// * Pointer und Referenzen

#include <iostream>
//#include <stdio.h>	// * fuer mingw


int main(int argc, char **argv) // **argv = *argv[]
{

    #if 1
		// * Hier wird eine gewoehnliche Variablen mit
		// * NULL initialisiert.
		long double val = 0;
		// * Hier wird der Variablen pt die Adresse der
		// / Variable val zugewiesen
		long double*pt = &val; // int *pt = &val; int* pt = &val; // * Letzte Variante theoretisch als die richtige

		std::cout <<"Wert von val wird ausgegeben: " << val << std::endl;
		// * Hier wird val 100 zugewiesen durch dem Pointer pt

		*pt = 100;	// Dereferenzierungsoperation: Durch den Pointer wird val mit dem Wert 100 belegt (analog zu val = 100;)															// *	pt = 0x100;

		std::cout <<"Wert von *pt wird ausgegeben: " << *pt << std::endl;

		std::cout <<"sizeof(long double): " << sizeof(long double) << std::endl;
		std::cout <<"sizeof(pt): " << sizeof(pt) << std::endl;

		std::cout <<"Wert von val wird ausgegeben: "<< val << std::endl;
    #endif


    #if 0
		// * Hier wird eine gewoehnliche Variable definiert:
		int x=0;
		// * Hier wird ein Zeiger auf int, also eine Variable,
		// * die die Adresse einer int-Variable aufnehmen kann,
		// * definiert.
		int *pointer;

		// * Hiert wird der Variablen pointer die Adresse der
		// * Variable x zugewiesen
		pointer = &x;
		std::cout << pointer<< std::endl;
		std::cout << &x<< std::endl;

		// * Hier wird der von pointer referenzierten Variable
		// * -also x- der Wert 1 zugewiesen.
		*pointer = 1;
		std::cout <<"Wert von x:"<< x<< std::endl;

		// * Hier wird der Wert der von pointer referenzierten
		// * Variablen -also x- um 1 erhoet.
		*pointer = *pointer + 1;  // x = x+1
		std::cout << "Wert von x + 1: " << x << std::endl;
    #endif

    #if 1
		// * Beispiele von Pointer:
		float* pf;	// Ein Zeiger auf float // = beste/theoretisch richtige Schreibweise // noch besser = NULL erg�nzen
		char *pc;	// Ein Zeiger auf char
		unsigned int*pui;	// Ein Zeiger auf unsigned int
		// * Das ist ein Pointer auf einem Pointer auf int
		int ropi;
		int *popi=&ropi;
		int **a=&popi; // ARRAY IST ZEIGER + ZEIGERARITHMETIK // Zeiger auf Zeiger
		// gleichbedeudend mit Array aus Zeigern ca. w[]=*a
		//int ***roro = &a;
    #endif

    #if 1
		// * Hier wird ein Zeiger auf einem Variablentyp definiert
		/*int babo=3;
		int* p=&babo;*/
        int* p=NULL;
		//char *p=NULL;
		//double *p=0;
		//long double* p=0;

		// * Hier wird dem Zeiger jeweils um 1, 2 und 3
		// * Einheiten erhoeht
		//std::cout <<"\nGr\u00f6\u00dfe von %s: %d\n", type_name(*p), sizeof(*p));
		/*
		printf("p + 0 = %d\n", p + 0);
		printf("p + 1 = %d\n", p + 1);
		printf("p + 2 = %d\n", p + 2);
		printf("p + 3 = %d\n", p + 3);
		*/

		std::cout <<"p + 0 = " << p + 0 << std::endl;
		std::cout <<"p + 1 = " << p + 1 << std::endl;
		std::cout <<"p + 2 = " << p + 2 << std::endl;
		std::cout <<"p + 3 = " << p + 3 << std::endl;


    #endif

return 0;
}
