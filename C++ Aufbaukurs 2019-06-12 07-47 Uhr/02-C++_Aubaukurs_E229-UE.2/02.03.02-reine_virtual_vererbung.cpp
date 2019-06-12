// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.03.02 der C++ Programmierung
// * Reine virtuelle Funktionen - Vererbung


#include <iostream>

class Automaten
{
	protected:
		int BildschirmMenge;

	public:
		// * Reine virtuelle Funktion wird angelegt
		virtual void set_Info(int _BildschirmMenge) = 0;
		virtual int get_BildschirmMenge() = 0;
};

class Geldautomaten : public Automaten
{
	public:
		// * Konstruktor der unser Objekt bereit stellt (initialisiert).
		Geldautomaten()
		{
		    std::cout << "Neuer Geldautomat ist erstellt!"
                      << std::endl;
        }
		~Geldautomaten(){};

		// * Reine virtuelle setter-Methode wird zwangshaft benutzt
		void set_Info(int _BildschirmMenge)
		{
            BildschirmMenge = _BildschirmMenge;
		}

		#if 1
		// * Reine virtuelle getter-Methode werden zwangshaft benutzt
        int get_BildschirmMenge()
        {
            return BildschirmMenge;
        }
		#endif

	protected:

		// * Reine virtuelle Methode werden zwangshaft benutzt
		void GeldautomatenFertigung()
		{
            std::cout << "Geldautomat Id-Nr.: "
                      << BildschirmMenge << std::endl;
		}
};

class Geldaut_FingerIdent : public Geldautomaten /*Automaten */
{
	public:
		Geldaut_FingerIdent(int serial_id)
		{
			std::cout << "Neuer Geldautomat mit "
                      << "Fingerprintidentifikation Serie "
					  << serial_id << " ist erstellt!"
					  << std::endl;
		}

		// * Reine virtuelle setter-Methode wird zwangshaft benutzt
		void set_Info(int _BildschirmMenge)
		{
			BildschirmMenge = _BildschirmMenge;
		}

    private:

		int serial_id;

		#if 0
		// * Reine virtuelle getter-Methode werden zwangshaft benutzt
			int get_BildschirmMenge()
			{ return BildschirmMenge; }
		#endif
};


int main()
{
    std::cout << "Geldautomat a11" << std::endl;
    Geldautomaten a11;
    a11.set_Info(1);

   	std::cout << "\n";

	std::cout << "Geldautomat b10" << std::endl;
    Geldaut_FingerIdent b10(2);
    b10.set_Info(2);

//    getchar();
    return 0;
}
