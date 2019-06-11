// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.03.04 der C++ Programmierung
// * Vererbung: mehrfach Vererbung
// * "Fast" leere erbende Klasse

#include <iostream>

class Vater
{
    private:
		char geschlecht; 		// * m=maenlich, w=weiblich, u=undefiniert
		void funktion_arbeiten()
		{ 	std::cout << "Ich gehe arbeiten... Buhhhh" << std::endl;    }

   	protected:
		void funktion_sprachenvater()
		{
			std::cout << "Ich kann englisch." << std::endl;
			std::cout << "Ich kann deutsch." << std::endl;
			std::cout << "Ich kann italienisch." << std::endl;
		}

   	public:
		Vater(){};
};

class Mutter
{
    protected:
		int MengeBruestchen;
		void funktion_sprachenmutter()
		{
			std::cout << "Ich kann russisch." << std::endl;
		}


    public:
		Mutter(){};
};

class Tochter : public Vater, public Mutter
{
    private:

    protected:

    public:
		Tochter()
		{
			MengeBruestchen=2;
			funktion_sprachenmutter();
			funktion_sprachenvater();
			//return 0;
		}
};

int main(int argc, char **argv){

    Tochter momi;
    //Tochter momu;

return 0;
}
