// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.02.01 der C++ Programmierung
// * Template einer Klasse
// * (es koennen mehre Datentypen uebergeben werden)

#include <iostream>

// * Template einer Klasse
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

    	type_3 rechnen(type_1 a, type_2 b, type_3 c);
		//double rechnen();

};


// * Template einer Funktion
template<typename type_1, typename type_2, typename type_3>
type_3 math<type_1, type_2, type_3>::rechnen(type_1 a, type_2 b, type_3 c)
//double math::rechnen()
{
    std::cout << a+b+c << std::endl;
	return ((wert1*wert1)-wert2)/wert3;
}

int main()
{
    math<int, int, int>  math01(3, 2.3, 4.3587);
    math<float, double, float>  math02(8, 2.8, 5.3567);

    std::cout << "\n"<< math01.rechnen(2, 9.74, 4.3358) << "\n" << std::endl;
    std::cout << "\n"<< math02.rechnen(5, 8, 4) << "\n" << std::endl;

    return 0;
}
