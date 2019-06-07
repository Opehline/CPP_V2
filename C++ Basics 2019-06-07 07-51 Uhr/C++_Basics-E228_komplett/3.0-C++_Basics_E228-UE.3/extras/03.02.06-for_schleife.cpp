// Gisela Neira
// C++ Basics E228
// * Programm 03.02.06 der C/C++ Programmierung
// * for-Schleife: mit zwei Zähler

#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{

    int serial1[7]={1,4,3,1,2,3,0}; // * = 14
    int serial2[3]={2,5,0}; // * = 7
    int sum1=0, sum2=0;
    int i=0, r=0;

	// * ODER Beziehung
	/*
	serial2[0]=2
	serial2[1]=5
	serial2[2]=0
	--------
	serial2[3]=MUELLLLLLLLLL // Keine Bereichueberpruefung!
	*/
    //for(i=0, r=0; i<=7, r<=3; i++, r++) 	// * Nimmt muell: 0 1 2 3 4 5 6 7 // 0 1 2 3
    for(i=0, r=0; i<7, r<3; i++, r++) 	    // * Richtig 		//  * 	i<7 => 1     r<3 = 0  1&&0 = 0
    {
    	std::cout << "serial1 " << serial1[i] << std::endl;
    	//std::cout << "serial2 " << serial2[i] << std::endl;
		sum1 += serial1[i];
		sum2 += serial2[r];
    }

    std::cout << sum1*sum2 << std::endl;


return 0;
}
