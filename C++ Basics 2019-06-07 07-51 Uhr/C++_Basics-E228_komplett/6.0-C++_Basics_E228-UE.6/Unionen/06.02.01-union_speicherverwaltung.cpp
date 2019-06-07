// Gisela Neira
// C++ Basics E228
// * Programm 06.02.01 der C/C++ Programmierung
// * Uniones: Speicherverwaltung einer Union im vergleich
// * mit der von einem Struct

/*

STRUCT:
*|char||----------string[10]-----------||---int---||--------double---------|**|char||----------string[10]-----------||---int---||--------double---------|*

UNION:
*|-------------------------------|*
 |----------string[10]-----------|
 |char|
 |---int---|
 |--------double---------|

*/

#include <iostream>
#include <string.h>

//#define UNION
#define STRING

#define MAX 25


#ifndef UNION
struct Groesse
{
    char Zeichen1;		// 4
    short int Short;	// 2
    int Int;			// 4
    float Float;		// 4
    double Double;		// 8
    #ifdef STRING
	char String[10];	// mindestens 10
    #endif
}groesse;
#endif

#ifdef UNION
union Groesse
{
    char Zeichen1;		// 4
    short int Short;	// 2
    int Int;			// 4
    float Float;		// 4
    double Double;		// 8
    #ifdef STRING
	char String[10];	// mindestens 10
    #endif
}groesse;
#endif


int main(int argc, char **argv)
{
    #ifndef UNION
			std::cout <<"------------------------------------------------------------------------------------\n";
			std::cout <<"------------------------------------------------------------------------------------\n";
		   std::cout << "\t\t*****************     STRUCT    ****************\n";
			std::cout <<"------------------------------------------------------------------------------------\n";
			std::cout <<"------------------------------------------------------------------------------------\n";
    #endif

    #ifdef UNION
			std::cout <<"------------------------------------------------------------------------------------\n";
			std::cout <<"------------------------------------------------------------------------------------\n";
			std::cout <<"\t\t*****************     UNION     ****************\n";
			std::cout <<"------------------------------------------------------------------------------------\n";
			std::cout <<"------------------------------------------------------------------------------------\n";
    #endif

			std::cout <<"\n******* Speicheradressen: \n\n";
			std::cout <<"Zeichen: "<< static_cast<void *>(&groesse.Zeichen1) << std::endl;
			std::cout <<"Short: \t " << &groesse.Short << std::endl;
			std::cout <<"Int: \t " << &groesse.Int << std::endl;
			std::cout <<"Float: \t " << &groesse.Float << std::endl;
			std::cout <<"Double:  "<< &groesse.Double << std::endl;

    #ifdef STRING
			std::cout <<"String:  "<< &groesse.String<< std::endl;
    #endif

			std::cout <<"\nSpeicheradresse einer Variable eines/r";
			std::cout <<"\nStruct/Union (Selbe Adresse wie das erste Element): " << (&groesse) << std::endl;
			std::cout <<"------------------------------------------------------------------------------------\n";


			std::cout <<"\n******* Speichergroessen: \n\n";
			std::cout <<"Zeichen: "<< sizeof(char) << " Bytes " << std::endl;
			std::cout <<"Short: \t "<< sizeof(short) << " Bytes " << std::endl;
			std::cout <<"Int: \t "<<sizeof(float) << " Bytes " << std::endl;
			std::cout <<"Double:  "<< sizeof(double) << " Bytes " << std::endl;

    #ifdef STRING
       		std::cout <<"String: "  << sizeof(groesse.String) << " Bytes " << std::endl;
    #endif

    		std::cout <<"------------------------------------------------------------------------------------\n";

    #ifndef UNION
		#ifndef STRING
	   		std::cout << "Es muss mindestens eine Speichergroesse von "
			   		  << sizeof(char)+sizeof(short)+sizeof(int)+sizeof(float)+sizeof(double)
					  << " Bytes bereitgestellt. \n" ;
		#endif

		#ifdef STRING
	    	   		std::cout << "Es muss mindestens eine Speichergroesse von "
			   		  << sizeof(char)+sizeof(short)+sizeof(int)+sizeof(float)+sizeof(double)+sizeof(groesse.String)
					  << " Bytes bereitgestellt. \n";
		#endif
    #endif
    #ifdef UNION
		#ifndef STRING
	    	std::cout <<"Summe Speichergroesse (Addition Elemente der Union ohne String) Bytes: " <<
			sizeof(char)+sizeof(short)+sizeof(int)+sizeof(float)+sizeof(double);
		#endif
		#ifdef STRING
	    	std::cout <<"Summe Speichergroesse (Addition Elemente der Union mit String) Bytes:  " <<
			sizeof(char)+sizeof(short)+sizeof(int)+sizeof(float)+sizeof(double)+sizeof(groesse.String) << std::endl;
		#endif
    #endif
			std::cout <<"------------------------------------------------------------------------------------\n";
			std::cout <<"Reale Speichergroesse (sizeof(groesse)):" << sizeof(groesse) << std::endl;
			std::cout <<"____________________________________________________________________________________\n";
			std::cout <<"Der Speicherplatz einer Union oder eines Structs wird vom Compiler errechnet, \n";
			std::cout <<"mit einem Padding-factor.\n";
			std::cout <<"Bei der Union wird der Speicherplatz folgerndermassen ermittelt: \n";
			std::cout <<"groesse vom max Element + padding (abhaengig vom der groesse des max Elements).";
			std::cout <<"\n____________________________________________________________________________________\n";


return 0;
}
