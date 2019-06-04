// Gisela Neira
// C++ Basics E228
// * Programm 05.05.01 der C/C++ Programmierung
// * Zweidimensionales Array:

#include <iostream>
#undef INNEN

using namespace std;

int main(int argc, char **argv)
{
	int zweiDim[3][4];
	/* 	00 01 02 03
		10 11 12 13
		20 21 22 23
	*/

	// a repaesentiert Schleife der ersten Dimension
	// a steht fuer außen (äußere for-Schleife)
	// i repäsentiert Schleife der zweiten Dimension
	// i steht für innen (innere for-Schleife)
	int a, i;

	#ifdef INNEN // zum Verstehen der inneren Schleife
	a=0;
		for(i=0; i<4; i++)
		{
			 zweiDim[a][i] = a + i;
			 cout << zweiDim[a][i] << endl;
		}
		cout << "\n";
		cout << "\n";
	#endif

	for(a=0; a<3; a++)
	{
		for(i=0; i<4; i++)
		{
			 zweiDim[a][i] = a + i;
			 cout << zweiDim[a][i] << endl;
		}
	cout << "\n";  	// \n damit die Ausgabe in der
					// Form eines Arrays erscheint
	}

    // * Beschreibung wie die for-Schleife den
    // * zweidimensionalen Array fuellt.

    // * Zuerst wird die innere Schleife ausgewertet
    // * Erste Runde der inneren Schleife:
    //   zweiDim[0][0] = 0+0 => a00 = 0 / a=0, i=0
    //   i wird um 1 inkrementiert, a bleibt 0
    //	 Zweite Runde der Schleife:
    //   zweiDim[0][1] = 0+1 => a01 = 1 / a=0, i=1
    //   ... Vierte Runde der Schleife
    //   zweiDim[0][3] = 0+3 => a03 = 3 / a=0, i=3
    //   Jetzt erst wird aus der inneren Schleife
    //   gesrpungen
    // * Erste Rnde äußere Schleife:
    //	 a wird um 1 inkrementiert
    //   Nun wird wieder die innere Schleife
    //   ausgewertet... wie oben beschrieben

//getchar();

return 0;
}
