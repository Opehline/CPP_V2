// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.01.07 der C++ Programmierung
// * Nicht gueltig fuer C++ 11

#include <iostream>

template<typename type>
type constexpr Value = type(3.1415926535897932385);

int main()
{

	Value<float> = 0.6180339887498948482;

	std::cout << Value<float>;
	std::cout << Value<double>;

return 0;
}
