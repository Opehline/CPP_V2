// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.03.01 der C++ Programmierung
// * Vererbung: einfache Vererbung

#include <iostream>
/*
Ist ein Element in A 	public 		protected 	private
... wird es in B 		public 		protected 	nicht übergeben
... wird es in C		protected 	protected 	nicht übergeben
... wird es in D		private 	private 	nicht übergeben
*/
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
		Vater(){std::cout << "Konstruktor Vater." << std::endl;}
		~Vater(){std::cout << "Destruktor Vater." << std::endl;}
};

class Tochter : public Vater // public, protected, private
{
    private:
		void funktion_schule()
		{
			std::cout << "Ich gehe zur Schule... (Auch:) Buhhh." << std::endl;
		}

    protected:

    public:
   		Tochter(){std::cout << "Konstruktor Tochter." << std::endl;}
   		~Tochter(){std::cout << "Destruktor Tochter." << std::endl;}
		void funktion_sprachentochter()
		{
			funktion_sprachenvater();
			// * Fehler, warum?
			//funktion_arbeiten();
		}
};

int main(int argc, char **argv)
{
    Tochter momi;
    std::cout << "Tochter sagt:" << std::endl;
    momi.funktion_sprachentochter();
    // * Fehler, warum?
    //momi.funktion_arbeiten();
    //momi.funktion_sprachenvater();

return 0;
}
