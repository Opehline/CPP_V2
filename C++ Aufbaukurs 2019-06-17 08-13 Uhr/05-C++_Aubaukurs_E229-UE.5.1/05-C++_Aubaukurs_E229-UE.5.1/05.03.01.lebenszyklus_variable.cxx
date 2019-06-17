// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.03.01 der C++ Programmierung
//   Softwareteschnicher Lebenszyklus einer Variable


#include <iostream>

int main()
{
	for(int i=0; i<=5; ++i)
	{ std::cout << i << std::endl;  }		// * Ausgabe von lokal deklarierter Schleifenvariable

	//{
	    int a = 7;
	    std::cout << a << std::endl;
	//}

	std::cout << a << std::endl;  			// * Welche Compilerfehlermeldung?

getchar();
}
