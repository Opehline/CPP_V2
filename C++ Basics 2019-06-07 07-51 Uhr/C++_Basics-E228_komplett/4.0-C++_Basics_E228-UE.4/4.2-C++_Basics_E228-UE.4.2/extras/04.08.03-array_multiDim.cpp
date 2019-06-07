// Gisela Neira
// C++ Basics E228
// * Programm 04.04.03 der C/C++ Programmierung
// * Multidimensionale Arrays
// * MD-Arrays sind in Wirklichkeit 1D-Arrays plus Terminatorzeichen.

#include "stdio.h"

int main()
{	
	int arrAlt[6]={0};
	int arrNeu[2][3]={0};
    int (*p_arrNeu)[2][3] = &arrNeu;
    

	int i=0, j=0;
	
	arrAlt[0]=59;	// * [0]
	arrAlt[1]=84;	// * [1]
	arrAlt[2]=658;	// * [2]
	arrAlt[3]='\0';	// * [3]
	arrAlt[4]=134;	// * [4]
	arrAlt[5]=63;	// * [5]
	arrAlt[6]=12;	// * [6]
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			*(p_arrNeu[i][j]+i)=*(arrAlt+i);
			printf("Ausgabe arrNeu[%i][%i]: %p %i \n", i, j, &arrNeu[i][j], *(arrNeu+i));
		}
	}
    
    for(i=0; i<6; i++)
	{
		printf("Ausgabe arrAlt[%i]: %p %i \n", i, &arrAlt[i], *(arrAlt+i));
	}
return 0;
}
