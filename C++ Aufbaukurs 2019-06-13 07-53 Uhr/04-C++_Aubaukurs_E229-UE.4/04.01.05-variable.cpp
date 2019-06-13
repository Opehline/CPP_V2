// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.01.05 der C++ Programmierung
// * Template fuer eine Variable

#include <iostream>

template <typename type>
type gibtPiZurueck()
{
	constexpr type pi = type(3.1415926535897932385); 	// * "constexpr" gibt an, den Wert
														// * der Variable (auch bei Funktionen)
return pi;												// * zur Kompilierungszeit auszuwerten.
}

int main()
{
	std::cout << gibtPiZurueck<int>() << std::endl;
	std::cout << gibtPiZurueck<double>() << std::endl;

return 0;
}
