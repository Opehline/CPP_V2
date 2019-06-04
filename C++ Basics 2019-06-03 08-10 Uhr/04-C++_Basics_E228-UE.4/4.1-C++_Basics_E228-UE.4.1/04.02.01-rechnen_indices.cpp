// Gisela Neira
// C++ Basics E228
// * Programm 04.02.01 der C/C++ Programmierung
// * Array: Rechnen mit Indices eines Arrays

#include <iostream>

#define MAX 20

int funkWichtig()
{
	int m=0;
	std::cout << "Gebe den Sieger ein!" << std::endl;
	// * Vieeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeel Programmcode
	std::cin >> m;
	return m;
}

int main(int argc, char **argv)
{
    // * Initialisierung eines int-Arrays
    int a[MAX] = {5, 7, 4, 6, 22, 14};
    int index = 0;

	index = funkWichtig(); // = 3

	// * Indicesarihtmetik
    a[3*index+4] = a[index+2]-3; // *    = 11    // * a[5}-3 // * 14 - 3 = 11 => a[13]=11;
    std::cout <<"Wert von Element (3 * " << index << " + 4), also a[" << 3*index+4 << "]: " << a[index+2]-3 << "\n";
	// * Zur Verifizierung wird die rechte Seite des =-Operators ausgegeben:
    //std::cout <<"Wert von Element a[ " << 3*index+4 << "]:" << a[3*index+4] << "\n"; //

return 0;
}
