// Gisela Neira
// C++ Aufbaukurs E229
// * Basisprogramm 01.01.02 der C++ Programmierung
// * Wie eine oder mehrere Klassen erstellen (teoretisch)?
// * (Kein richtiger Code! Fehlerhaft!)

#include <iostream>

class Alter
{
	protected:
		float a=53;
		std::cout << "Du bist wirklich " << a << " Jahre Alt?" << std::endl;
};

class Risikofaktor : public Alter
{
	public:
		std::cin >> a;
		std::cout << "Ihr Risikofaktor ist " << a*0.7 << std::endl;
};


int main()
{
	return 0;
}
