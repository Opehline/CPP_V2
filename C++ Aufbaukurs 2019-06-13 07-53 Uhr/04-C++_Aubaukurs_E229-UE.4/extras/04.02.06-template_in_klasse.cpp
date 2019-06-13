 // Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.02.06 der C++ Programmierung
// * Template als Member einer Klasse
// * nicht ausgelagert


#include <iostream>

class MultiZahl
{
	private:
	    int a;
	public:


    MultiZahl(int zahl)
	{
		a = zahl;
	}

	int getMultiZahl()
	{
		return a;
	}

	// * Template
    template<typename type>
    type BerechnenMultiZahl(type faktor)
	{
		faktor *=a;
		return faktor;
	}
};

int main()
{
    MultiZahl multiZahl01(3);
		std::cout << multiZahl01.BerechnenMultiZahl<short int>(3) << std::endl;
	MultiZahl multiZahl02(2);
		std::cout << multiZahl02.BerechnenMultiZahl<double>(3.69845) << std::endl;
	MultiZahl multiZahl03(8);
		std::cout << multiZahl03.BerechnenMultiZahl<float>(7.4) << std::endl;
	MultiZahl multiZahl04(5);
		std::cout << multiZahl04.BerechnenMultiZahl<signed int>(-23) << std::endl;
	MultiZahl multiZahl05(7);
		std::cout << multiZahl05.BerechnenMultiZahl<long double>(-3.2159736474) << std::endl;
}
