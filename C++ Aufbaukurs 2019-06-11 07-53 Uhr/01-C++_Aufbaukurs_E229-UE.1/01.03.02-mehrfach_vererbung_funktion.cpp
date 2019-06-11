// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.03.02 der C++ Programmierung
// * Vererbung: mehrfach Vererbung
// * Vererbung von Funktionen


#include <iostream>

class Vater
{
    private:
		void funktion_arbeiten()
		{
		    std::cout << "Ich gehe arbeiten... Buhhhh" << std::endl;
		}

   	protected:
		void funktion_sprachenvater()
		{
			std::cout << "Ich kann englisch." << std::endl;
			std::cout << "Ich kann deutsch." << std::endl;
			std::cout << "Ich kann italienisch." << std::endl;
		}

   	public:
		Vater(){}
};

class Mutter
{
    protected:
		void funktion_sprachenmutter()
		{
			std::cout << "Ich kann russisch." << std::endl;
		}

    public:
		Mutter(){}
};

class Tochter : public Vater, public Mutter
{
    private:
		void funktion_schule()
		{
			std::cout << "Ich gehe zur Schule... (Auch:) Buhhh." << std::endl;
		}

    protected:

    public:
		Tochter(){std::cout << "Tochter sagt:" << std::endl;};
		void funktion_sprachentochter()
		{
			funktion_sprachenvater();
			funktion_sprachenmutter();
		}
};

int main(int argc, char **argv){

    Tochter momi;
    //std::cout << "Tochter sagt:" << std::endl;
    momi.funktion_sprachentochter();

return 0;
}
