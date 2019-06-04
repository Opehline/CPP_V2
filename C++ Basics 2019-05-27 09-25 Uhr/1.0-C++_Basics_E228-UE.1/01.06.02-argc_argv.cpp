// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.06.02 der C/C++ Programmierung
// * Eingabe durch command line C++ Programmierung.

#include <iostream>

int main(int argc, char **argv) // argc = Argument count // argv = argument values
{
    int i=0;

    for(i=0; i<argc; i++)
	{
		std::cout << "Position [" << i << "] > " << argv[i]
                  << std::endl;
    }

return 0;
}
