// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.01.06 der C++ Programmierung
// * Template für eine Variable 

#include <iostream>

template <typename type>
type gibtPiZurueck(int radius)
{
	constexpr type pi = type(3.1415926535897932385); 	// * "constexpr" gibt an, den Wert
														// * der Variable (auch bei Funktionen)  
return 2*pi*radius;										// * zur Kompilierungszeit auszuwerten.
}

int main()
{
	std::cout << gibtPiZurueck<int>(5) << std::endl;
	std::cout << gibtPiZurueck<long double>(12) << std::endl;

return 0;
}
