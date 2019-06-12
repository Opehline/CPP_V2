// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.01.02 der C++ Programmierung
// * Programm mit virtuelle Funktionen

#include <iostream>

class Hund // Basisklasse
{
    public:
		Hund()
		{
			std::cout << "Hund ist geboren." << std::endl;
		}

		void public_funktion_bellenfremderHund()
		{
			funktion_bellenfremderHund();
		}

	protected:
		virtual void funktion_vorstellen()
		{
			std::cout << "Ich bin ein Hund!" << std::endl;
		}

		// * Als virtuell deklarierte Methoden:
		virtual void funktion_gruss()
		{
			std::cout << "Pass auf du Hund!" << std::endl;
		}

		virtual void funktion_bellenwuetend()
		{
			std::cout << "Ich bin gefeahrlich!" << std::endl;
		}

		void funktion_bellenfremderHund()
		{
		    funktion_vorstellen();
		    funktion_gruss();
		    funktion_bellenwuetend();
		}
    private:
};

class GrossHund : public Hund
{
    public:
		GrossHund()
		{
			std::cout << "GrossHund ist geboren." << std::endl;
		}

	protected:
		void funktion_vorstellen() /*override*/ // * Fehler da in Elterklasse nicht virtual
		{
			std::cout << "Ich bin ein gorsser Hund!" << std::endl;
		}

		// * Als virtuell deklarierte Methoden:
		/*virtual*/ void funktion_gruss() /*override*/ // * Ok
		{
			std::cout << "Ohhhhh, wufff ich habe keine angst." << std::endl;
		}

		/*virtual*/ void funktion_bellenwuetend()
		{
			std::cout << "Wuff wuff wuff!" << std::endl;
		}
};


class Strassenkoeter : public GrossHund
{
    public:
		Strassenkoeter()
		{
			std::cout << "Strassenkoeter ist irgendwo geboren." << std::endl;
		}

		void public_funktion_vorstellen() /*override*/
		{
			funktion_vorstellen();
		}

	private:
		/*virtual*/ void funktion_gruss()
		{
			std::cout << "Hallo du fremder Mensch!" << std::endl;
		}

		/*virtual*/ void funktion_bellenwuetend()
		{
		    std::cout << "Bitte mich nicht treten! Ich bin friedlich." << std::endl;
		}

};

int main(int argc, char **argv)
{

    #if 0
    GrossHund wufo;
    wufo.public_funktion_bellenfremderHund();
    #endif

    #if 1
   	Strassenkoeter kiki;
    kiki.public_funktion_bellenfremderHund();
    kiki.public_funktion_vorstellen();
    #endif

    #if 0
    Hund polly;
    polly.public_funktion_bellenfremderHund();
    #endif

return 0;
}
