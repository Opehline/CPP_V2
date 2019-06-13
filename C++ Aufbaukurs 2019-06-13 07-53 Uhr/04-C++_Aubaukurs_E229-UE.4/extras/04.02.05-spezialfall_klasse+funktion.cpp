 // Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.02.05 der C++ Programmierung
// * Spezialfall (Specializations) 2 Klasse
// * und 2 Funktionen


#include <iostream>

template<typename type_1, typename type_2, typename type_3>
class Math
{
    private:
    	type_1 wert1;
    	type_2 wert2;
    	type_3 wert3;

    public:

    Math(type_1 a, type_2 b, type_3 c)
    {
		wert1 = a;
		wert2 = b;
		wert3 = c;
		
		std::cout << "*****Es wurden int-, float- und double-Werte eingetragen.*****" << std::endl;
		rechnen(wert1, wert2, wert3);
    } 
	type_3 rechnen(type_1 wert1, type_2 wert2, type_3 wert3);
};


template<>
class Math<char, char, char>
{
    private:
		char wert1;
    	char wert2;
    	char wert3;

    public:

    Math(char a, char b, char c)
    {
		wert1 = a;
		wert2 = b;
		wert3 = c;
		
		std::cout << "*****Es wurden nur char-Werte eingegeben: *****\n" << wert1 << wert2 << wert3 << std::endl;
		zeige(wert1, wert2, wert3);
    }

	void zeige(char wert1, char wert2, char wert3);
};


void Math<char, char, char>::zeige(char x, char y, char z)
{
	std::cout << "Die Werte sind: " << x << y << z << std::endl;
}


template<typename type_4, typename type_5, typename type_6>
type_6 Math<type_4, type_5, type_6>::rechnen(type_4 a, type_5 b, type_6 c)
{ 
	std::cout << "Werte werden errechnet:" << std::endl;
	std::cout << "Uebergebene Werte: " << wert1 << " " << wert2 << " " << wert3 << std::endl;
	std::cout << "Resultat Rechnung: " << ((wert1*wert1)-wert2)/wert3*b << std::endl << '\n';
}

int main()
{
	// * Ein- und auskommentieren
	Math <int, float, double> math01(3, 3.7, 3.45);
	Math <int, int, double> math02(3, 7, 3.45);
	Math <double, float, double> math03(7.45687, 7.42, 37.236597445);
	Math <char, char, char> math04('#','&' ,'+');
 
    return 0;
}
