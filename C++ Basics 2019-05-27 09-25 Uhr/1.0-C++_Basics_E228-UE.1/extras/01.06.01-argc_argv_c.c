// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.06.01 der C/C++ Programmierung
// * Eingabe durch command line C Programmierung.

#include <stdio.h>


int main(int argc, char **argv)
{
  	int i=0;

    for(i=0; i<argc; i++)
	{
		printf("Position [%i] > %s \n", i, argv[i]);
    }

return 0;
}
