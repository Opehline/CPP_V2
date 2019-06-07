// Gisela Neira
// C++ Basics E228
// * Programm 03.02.09 der C/C++ Programmierung
// * For-Schleife
// * ?-Operator und wie diferenziert iterrieren

#include "stdio.h"

int main(int argc, char **argv)
{

    int i=0, j=0, sum_a=0;
    int a[7] = {1, 3, 2, 4, 12, 34, 9},
	b[20] = {5, 3, 2, 4, 2, 4, 2, 8, 3, 3, 8, 6, 9, 1, 1, 3, 4, 7, 1};

    int maxWerte = 10;

    printf("Wieviele Zahlen berechnen?:");
    scanf("%i", &maxWerte);

    for(i=0,j=0;i<maxWerte && j<20; i++, j+=j<=19?2:0)   // * Ergebnis ist 36
    //for(i=0,j=0;i<maxWerte || j<20; i++, j+=j<=19?2:5)  	// * Ergebnis ist 96
    {
		    sum_a += a[i]+b[j];
		    printf("Summe %i %i \n", i, sum_a);
    }

    printf("\nSumme gesammt: %i \n", sum_a);

return 0;
}
