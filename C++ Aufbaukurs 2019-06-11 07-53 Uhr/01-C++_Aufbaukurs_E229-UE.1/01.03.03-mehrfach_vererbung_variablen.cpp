// Gisela Neira
// C++ Aufbaukurs E229
// * Basisprogramm 01.03.03 der C++ Programmierung
// * Verergung: mehrfach Vererbung
// * Variablen vererben

#include <iostream>

class Telefon
{
    private:

   	protected:
		int tastenAnzahl;
		int mengeHoerer;

   	public:
		Telefon(){};
};

class Computer
{
    protected:
		int tastenAnzahl;
		int mengeCPU;


    public:
		Computer(){};
};

class Smartphone : public Telefon, public Computer
{
    private:
    protected:

    public:
		Smartphone(){};

		void funktion_tastenAnzahl()
		{
			tastenAnzahl = 9;
			if(tastenAnzahl==9)
			{
				std::cout << "Smartphone ist vollstaendig" << std::endl;
            }
		}
};

int main(int argc, char **argv){

    Smartphone topNeu;
    std::cout << "Smartphone sagt:" << std::endl;
    topNeu.funktion_tastenAnzahl();

return 0;
}
