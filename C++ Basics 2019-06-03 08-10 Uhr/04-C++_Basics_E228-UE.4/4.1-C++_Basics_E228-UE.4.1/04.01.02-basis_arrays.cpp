// Gisela Neira
// C++ Basics E228
// * Programm 04.01.02 der C/C++ Programmierung
// * Array: Eingabe von Werten, Initialisierung, Austausch von Werten

#include <iostream>

#define MAX 20


int main(int argc, char **argv)
{
    // * Initialisierung eines int-Arrays
    int a[MAX] = {5, 6, 4, 7, 22, 14};
    int i;

	#if 0
		// * Ausgabe des a-Array mit Hilfe einer for-Scheife
		for(i=0; i<MAX; i++) // * Zaehler darf nur bis 19 gehen
		{
			std::cout << "Position " << i << " "<< a[i] << std::endl;
		}
		std::cout << "\n";
	#endif

	#if 1
		// * Ausgabe des a-Array mit Hilfe einer for-Scheife
		// * nur bis real eingetragene Werte
		for(i=0; i<MAX; i++)
		{
			//if(a[i]!='\0')    // Richtig oder falsch? 	r -> Nicht selbstgeschriebene Nullen, werden nicht ausgegeben
			//if(a[i]!=0)	    // Richtig oder falsch? 	r
			//if(a[i]!=0x00)	// Richtig oder falsch? 	r
			//if(a[i]!='0')	    // Richtig oder falsch?		f
			//if(a[i]!=' ')	    // Richtig oder falsch?		f
			//if(a[i])	    	// Richtig oder falsch?		r
			//if(!a[i])	    	// Richtig oder falsch?		f
			//if(!!a[i])	    // Richtig oder falsch?		r
			//if(a[i]<1)	    // Richtig oder falsch?		f
			//if(!(a[i]<1))	   	// Richtig oder falsch?		r
			{
				std::cout << "Position " << i << " "<< a[i] << std::endl;
			}
		}
	#endif

return 0;
}
