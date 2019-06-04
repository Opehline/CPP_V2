// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.09.02 der C/C++ Programmierung
// * Hausaufgabe in C++ Programmierung.

#include <iostream>
#include <iomanip>	// std::setprecision
#include <cstdlib>	// atof

int main(int argc, char **argv)
{
    
    float alter1=atof(argv[1]), 
	 	  alter2=atof(argv[2]), 
		  durchschnitt=0; 
    
	durchschnitt = ((alter1+alter2)/2);
	
	std::cout << "\nDer Durchschnitt ist: >"
	 		  << std::setprecision(5) 
			  << durchschnitt << std::endl;
		
getchar();

return 0;
}
