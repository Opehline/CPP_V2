// Gisela Neira
// C++ Basics E228
// * Programm 02.06.01 der C/C++ Programmierung
// * Bedingte Compilierung in C++ Programmierung 
// * (genauso gueltig, mit minimalen Aenderungen, 
// * in C Programmierung).

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <clocale>

// * Wechseln von define auf undef
#undef WINDOWS
#define TESTUTF

#define MAX 5


void win_funktion(int _a);

void unix_funktion(int _a);

void UTF_WIN_Unix(int a);

void GleitkommaZahl(int i, float b[]);

void testBereich(int a, int i, float b[MAX]);



int main(int argc, char **argv)
{
    // * Ein uns auskommenieren
    setlocale(LC_ALL, "");
    setlocale(LC_ALL, "de_DE.UTF-8");
		 
    int a=0, i=0;
    float b[MAX];

	
	std::cout << "An dieser Stelle steht der nicht testbed\xfc""rftige Teil des Programms." << std::endl; // * Nicht portable Version der Ausgabe von Sonderzeichen

	testBereich(a, i, b);

return 0;
}


void win_funktion(int _a)
{
    std::cout << u8"Wert der \u00fcbertragen wurde f\u00fcr Windowsplattform. > " << _a << std::endl;
	#if 0
		// Etwas.......
	#endif
}



void unix_funktion(int _a)
{
    std::cout << u8"Wert der \u00fcbertragen wurde f\u00fcr Unixplattform. > " << _a << std::endl;
}


void UTF_WIN_Unix(int a)
{
	#ifdef TESTUTF
		// * Es wird versucht eine portable Versin der Ausgabe der Sonderzeichen zu erreichen
	    std::cout << u8"Pr\u00fcfung druck Umlaute." << std::endl;
	    std::cout << u8"Ist das Wort >Pr\u00fcfung< richtig errschienen? (ja=1, nein=2)" << std::endl;
	    std::cin >> a; // * Hier wurde Puffer nicht gesäubert.
	    //scanf("%i", &a);;
		if(a==1)
	    {
			std::cout << "Jupii! Die Probe war erfolgreich." << std::endl;
	    }
	    else 
	    {
			std::cerr << "Oh nein! Schon wieder schiefgegangen..." << std::endl;
			//exit(0);
	    }
	#endif

    a = a+1;
    #ifdef WINDOWS
		win_funktion(a);
    #else
		unix_funktion(a);
    #endif
}

void GleitkommaZahl(int i, float b[])
{
	for(i=0; i<MAX; i++)
	{	// * Was passiert wenn Zeilen kommentiert sind?
		//std::cin.clear();
		//std::cin.ignore();
		//fflush(stdin); // * Probieren mit scanf();
	    std::cout << "Gleitkommazahl eingeben: > " << std::endl;
	    std::cin >> b[i];
	}
	for(i=0; i<MAX; i++)
	{
	    std::cout << "Eingegeben Zahlen: > " << b[i] << std::endl;
	}
}

void testBereich(int a, int i, float b[MAX])
{
    #if 1
		UTF_WIN_Unix(a);
    #endif

    #if 1
		GleitkommaZahl(i, b);
    #endif
}

