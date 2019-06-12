// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.03.02 der C++ Programmierung
// * Vererbung: mehrfach Vererbung
// * Vererbung von Funktionen

#include <iostream>

class Vater
{
	protected: 
		void sprache()
		{
			std::cout << "Ich kann englisch." << std::endl;
			std::cout << "Ich kann deutsch." << std::endl;
			std::cout << "Ich kann italienisch." << std::endl;
		}
};

class Mutter 
{
    protected:    
		void sprache()
		{
			std::cout << "Ich kann russisch." << std::endl;
		}
};

class Tochter : public Vater, public Mutter
{
    public:
		Tochter()
		{
			Mutter::sprache();
			Vater::sprache();
		};
};

int main(int argc, char **argv){

    Tochter momi;

return 0;
}
