// Gisela Neira
// C++ Basics E228
// * Programm 02.06.01 der C/C++ Programmierung
// * Bedingte Compilierung in C++ Programmierung
// * (genauso gueltig, mit minimalen Aenderungen,
// * in C Programmierung).

#include <iostream>
#include <cstdlib>
#include <clocale>

// * Wechseln von define auf undef
#define WINDOWS
#define TESTUTF

#define MAX 5

using namespace std;

void win_funktion(int _a)
{
    cout << u8"Wert der \u00fcbertragen wurde f\u00fcr Windowsplattform. > " << _a << endl;
	#if 0
		// Etwas.......
	#endif
}

void unix_funktion(int _a)
{
    cout << u8"Wert der \u00fcbertragen wurde f\u00fcr Unixplattform. > " << _a << endl;
}

int main(int argc, char **argv)
{
    // * Ein uns auskommenieren
    setlocale(LC_ALL, "");
    setlocale(LC_ALL, "de_DE.UTF-8"); // Konsole auf deutsches UTF-System schalten

    int a=0, i=0;
    float b[MAX];

	cout << "An dieser Stelle steht der nicht testbed\xfc""rftige Teil des Programms." << endl; // * Nicht portable Version der Ausgabe von Sonderzeichen


    #if 0
		#ifdef TESTUTF
			// * Es wird versucht eine portable Versin der Ausgabe der Sonderzeichen zu erreichen
		    cout << u8"Pr\u00fcfung druck Umlaute." << endl;
		    cout << "Ist das Wort >Pr\u00fcfung< richtig errschienen? (ja=1, nein=2)" << endl;
		    cin >> a;
		    if(a==1)
		    {
				cout << "Jupii! Die Probe war erfolgreich." << endl;
		    }
		    else
		    {
				cerr << "Oh nein! Schon wieder schiefgegangen..." << endl;
				//exit(0);
		    }
		#endif

	    a = a+1;
	    #ifdef WINDOWS
			win_funktion(a);
	    #else
			unix_funktion(a);
	    #endif
    #endif

    #if 1
		for(i=0; i<=MAX; i++)
		{
		    cout << "Gleitkommazahl eingeben: > " << endl;
		    cin >> b[i];
		}
		for(i=0; i<MAX; i++)
		{
		    cout << "Eingegeben Zahlen: > " << b[i] << endl;
		}
    #endif

return 0;
}
