#include "header.hpp"

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
	    std::cout << u8"+++Pr\u00fcfung druck Umlaute.+++" << std::endl;
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

    a = a+134;
    #ifdef WINDOWS
		win_funktion(a);
    #else
		unix_funktion(a);
    #endif
}

void GleitkommaZahl(int i, float b[])
{
	for(i=0; i<MAX; i++)
	{	// * Was passiert wenn Zeilen kommentiert  sind?
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
    #if 0
		UTF_WIN_Unix(a);
    #endif

    #if 0
		GleitkommaZahl(i, b);
    #endif
}

