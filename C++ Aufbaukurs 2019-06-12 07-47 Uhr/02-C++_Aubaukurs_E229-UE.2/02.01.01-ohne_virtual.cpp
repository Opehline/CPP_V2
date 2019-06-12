// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.01.01 der C++ Programmierung
// * Vergleich Ablauf Programm ohne und mit virtual

#include <iostream>

// * BASISKLASSE
class Hund
{
    protected:
		// * Funktionen
		/*virtual*/ void funktion_vorstellen()
		{
			std::cout << "Ich bin ein Hund!" << std::endl;
		}

		/*virtual*/ void funktion_gruss()
		{
			std::cout << "Pass auf du Hund!" << std::endl;
		}

		/*virtual*/ void funktion_bellenwuetend()
		{
			std::cout << "Ich bin gefeahrlich!" << std::endl;
		}

		/*virtual*/ void funktion_bellenfremderHund()
		{
		    funktion_vorstellen();
		    funktion_gruss();
		    funktion_bellenwuetend();
		}

	public:
		/*virtual*/ void public_funktion_bellenfremderHund()
		{
			funktion_bellenfremderHund();
		}

		// * Konstruktor
		Hund()
		{
			std::cout << "Hund ist geboren." << std::endl;
		}
};

class Strassenkoeter : public Hund
{
    private:
		// * Funktionen
		void funktion_gruss()
		{
			std::cout << "Hallo du fremder Mensch!" << std::endl;
		}

		void funktion_bellenwuetend()
		{
		    std::cout << "Bitte mich nicht treten! Ich bin friedlich." << std::endl;
		}

	public:
		// * Konstruktor
		Strassenkoeter()
		{
			std::cout << "Strassenkoeter ist irgendwo geboren." << std::endl;
		}
};

int main(void)
{
    Strassenkoeter kiki;
    kiki.public_funktion_bellenfremderHund();

return 0;
}
