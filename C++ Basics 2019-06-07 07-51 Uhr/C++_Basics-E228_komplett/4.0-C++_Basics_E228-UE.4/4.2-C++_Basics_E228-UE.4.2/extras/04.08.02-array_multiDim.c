// Gisela Neira
// C++ Basics E228
// * Programm 04.04.02 der C/C++ Programmierung
// * Multidimensionale Arrays
// * MD-Arrays sind in Wirklichkeit 1D-Arrays plus Terminatorzeichen.

#include "stdio.h"

int main(int argc, char **argv)
{

	char arrAlt[] = "So\0\0\0\0\0\0viele\0\0\0Woerter\0in\0\0\0\0\0\0nur\0\0\0\0\0einem\0\0\0Array";
	char arrNeu[7][8];

	char *p_arrAlt = &arrAlt;
	char *p_arrNeu = &arrNeu;

	/*
		// * Ein eindimensionales Array
	->	[ 0 ][ 1 ][  2 ][ 3 ][ 4 ]...
		['S']['o']['\0']['v']['i']['e']['l']['e']['\0']['W']['o']['e']['r']['t']['e']['r']['\0']['i']['n']['\0']['n']['u']['r']['\0']['e']['i']['n']['e']['m']['\0']['A']['r']['r']['a']['y']

		// * Wir schneiden unser Array wo sich die \0 befinden.
		['S']['o']['\0']
		['v']['i']['e']['l']['e']['\0']
		['W']['o']['e']['r']['t']['e']['r']['\0']
		['i']['n']['\0']
		['n']['u']['r']['\0']
		['e']['i']['n']['e']['m']['\0']
		['A']['r']['r']['a']['y']

		// * Vorherige Darstellung mit Nullen ergaenzt
		['S']['o']['0']['0']['0']['0']['0']['0']
		['v']['i']['e']['l']['e']['0']['0']['0']
		['W']['o']['e']['r']['t']['e']['r']['0']
		['i']['n']['0']['0']['0']['0']['0']['0']
		['n']['u']['r']['0']['0']['0']['0']['0']
		['e']['i']['n']['e']['m']['0']['0']['0']
		['A']['r']['r']['a']['y']['0']['0']['0']

		7x8 Array also: arrAltNeuay[7][8]

	*/

	int i=0;
	for(i=0; i<56; i++)
	{
		*(p_arrNeu+i)=*(p_arrAlt+i);
		//*(arrNeu+i)=*(arrAlt+i);
	}

	printf("Ausgabe: %c \n", *(arrAlt + 8*6 + 3));
	printf("Ausgabe: %c \n", arrNeu[6][3]);

	printf("Ausgabe: %p %c \n", &arrNeu[0][0], arrNeu[0][0]);
	printf("Ausgabe: %p %c \n", &arrNeu[0][1], arrNeu[0][1]);
	printf("Ausgabe: %p %c \n", &arrNeu[0][2], arrNeu[0][2]);
	printf("Ausgabe: %p %c \n", &arrNeu[0][3], arrNeu[0][3]);
	printf("Ausgabe: %p %c \n", &arrNeu[0][4], arrNeu[0][4]);
	printf("Ausgabe: %p %c \n", &arrNeu[0][5], arrNeu[0][5]);
	printf("Ausgabe: %p %c \n", &arrNeu[0][6], arrNeu[0][6]);
	printf("Ausgabe: %p %c \n", &arrNeu[0][7], arrNeu[0][7]);
	printf("Ausgabe: %p %c \n", &arrNeu[1][0], arrNeu[1][0]);
	printf("Ausgabe: %p %c \n", &arrNeu[1][1], arrNeu[1][1]);
	printf("Ausgabe: %p %c \n", &arrNeu[1][2], arrNeu[1][2]);
	printf("Ausgabe: %p %c \n", &arrNeu[1][3], arrNeu[1][3]);
	printf("Ausgabe: %p %c \n", &arrNeu[1][4], arrNeu[1][4]);
	printf("Ausgabe: %p %c \n", &arrNeu[1][5], arrNeu[1][5]);
	printf("Ausgabe: %p %c \n", &arrNeu[1][6], arrNeu[1][6]);
	printf("Ausgabe: %p %c \n", &arrNeu[1][7], arrNeu[1][7]);

   
return 0;
}
