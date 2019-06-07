// Gisela Neira
// C++ Basics E228
// * Programm 03.01.03 der C/C++ Programmierung
// * Umwandlung von array-Wert in float
// * Bewertung ob es Eingabe per commandline gegeben
// * hat.
// * Bewertung ob Eingabe innerhalb des erlaubten
// * Bereiches liegt

#include <stdio.h>
#include <stdlib.h> // atof

int main(int argc, char **argv)
{
	// * Per Commandline einmal keinen Wert eingeben.
	// * Per Commandline einmal den Wert -5 eingeben.
	// * Per Commandline einmal den Wert 15 eingeben.
	// * Per Commandline einmal den Wert 8 eingeben.
    float j=0;

    j = atof(argv[1]);

    if(!argv[1])
    {
		printf("\nHopla! Sie haben keinen Wert eingegeben.\n");
    }
//;
    else if((j<1)||(j>10))
    {
			printf("Na huch? Es wurde ein Wert aussferhalb des erlaubten Bereichs eingegeben.\n");
    }
    else
    	printf("Sie haben eine: %s eingegeben.\n", argv[1]);

return 0;
}
