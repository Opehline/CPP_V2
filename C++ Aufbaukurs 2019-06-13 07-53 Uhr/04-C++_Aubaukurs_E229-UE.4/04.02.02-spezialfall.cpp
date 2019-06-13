// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.02.02 der C++ Programmierung
// * Spezialfall (Specializations).


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
    }

    type_3 rechnen();
};


template<>
int math<int, int, int>::rechnen()
{
	std::cout << "Ich bin der Spezialfall!!" << std::endl;
	return ((wert1*wert1)-wert2)/wert3;
}

template<typename type_1, typename type_2, typename type_3>
type_3 math<type_1, type_2, type_3>::rechnen()
{
	std::cout << "Es wurden int-, float- und double-Werte uebergeben." << std::endl;
	return ((wert1*wert1)-wert2)/wert3;
}

int main()
{
	// * Ein- und auskommentieren
    math <int, float, double> math01(3, 3.7, 3.45);
	math <double, double, double> math02(3.145, 4.87655, 3.09876);
	math <int, int, int> math03(3, 4, 6);
	//math <int, int, int> math04(7, 45, 2);

    std::cout << "\n"<< math01.rechnen() << "\n" << std::endl;
    std::cout << "\n"<< math02.rechnen() << "\n" << std::endl;
    std::cout << "\n"<< math03.rechnen() << "\n" << std::endl;
    //std::cout << "\n"<< math04.rechnen() << "\n" << std::endl;

    return 0;
}
