// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.02.03 der C++ Programmierung
// * Spezialfall (Specializations) Klasse
// * ohne Funktion.

#include <iostream>


template <typename type>	// template <class type> ??
class uebergabe
{
    public:
    uebergabe(type x)
    {
		std::cout << x << "  Das ist kein char." << std::endl;
    }
};

template <>
class uebergabe<char>
{
    public:
    uebergabe(char x)
    {
		std::cout << x << "  Das ist ein char." << std::endl;
    }
};

int main()
{
	 uebergabe<int> object01(2);
	 uebergabe<double> object02(2.458);
	 uebergabe<char> object03('#');

    return 0;
}
