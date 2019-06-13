// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.02.04 der C++ Programmierung
// * Spezialfall (Specializations) 2 Klassen
// * und eine Funktion


#include <iostream>

template<typename type_1, typename type_2, typename type_3>
class math
{
    private:
    	type_1 wert1;
    	type_2 wert2;
    	type_3 wert3;

    public:

    math(type_1 a, type_2 b, type_3 c)
    {
		wert1 = a;
		wert2 = b;
		wert3 = c;

		std::cout << "\nEs wurden int-, float- und double-Werte eingetragen.\n" << std::endl;
    }

    type_3 rechnen();
};


template<>
class math<int, int, int>
{
    private:
		int wert1;
    	int wert2;
    	int wert3;

    public:

    math(int a, int b, int c)
    {
		wert1 = a;
		wert2 = b;
		wert3 = c;

		std::cout << "\nEs wurden nur int-Werte eingegeben. \n" << std::endl;
    }

    int rechnen();
};

template<typename type_1, typename type_2, typename type_3>
type_3 math<type_1, type_2, type_3>::rechnen()
{
	return ((wert1*wert1)-wert2)/wert3;
}


int main()
{
	// * Ein- und auskommentieren
	math <int, float, double> math01(3, 3.7, 3.45);
	math <int, int, int> math02(3, 5, 3);

    return 0;
}
