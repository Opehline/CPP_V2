// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.05.01 der C++ Programmierung
// * Beispiel Ueberladen von einer Funktion


#include <iostream>

class mathematischerStrassenkoeter
{
    public:
    	// * Eigenschaften matematischer Strassenkoeter
		int i; 				// * matematischer Strassenkoeter kann int-Werte erkennen
		unsigned int ui;	// * matematischer Strassenkoeter kann unsigned int-Werte erkennen
		double d; 			// * matematischer Strassenkoeter kann double-Werte erkennen
		char c; 			// * matematischer Strassenkoeter kann char-Werte erkennen
		float f; 			// * matematischer Strassenkoeter kann float-Werte erkennen
		std::string wort;	// * matematischer Strassenkoeter kann soger ein Text erkennen!

		// * Feahigkeiten matematischerStrassenkoeter
		//matematischerStrassenkoeter(){std::cout << "Ein sehr intelligenter matematischer Strassenkoeter ist geboren" << std::endl;}

		void Bellen(signed int i)
		{
			std::cout << "Das ist ein int: " << i << std::endl;
		}

		// * Das geht nicht!
		/*
		void Bellen(int i)
		{ std::cout << "Das geht natuerlich nicht" << i << std::endl;}
		*/

		void Bellen(unsigned int ui)
		{
			std::cout << "Das ist sehr positiv (unsigned int): " << ui << std::endl;
		}

		float Bellen(float f)
		{
			std::cout << "Das ist ein float: ";
			return f;
		}

		double Bellen(double d)
		{
			std::cout << "Aber das ist ganz sicher ein double: ";
			return d;
		}

		void Bellen(char c)
		{
			std::cout << "Keiner versteht mich... (char): " << c << std::endl;
		}

		void Bellen(float f, int i)
		{
			std::cout << "Das ist die Summe von einem float und einem int: " << f+i << std::endl;
		}

		void Bellen(int i, float f)
		{
			std::cout << "Das ist die Summe von einem int und einem float: " << f+i << std::endl;
		}

		std::string Bellen(std::string text)
		{
			std::cout << "Sie haben gesagt: ";
			return text;
		}
};


int main()
{
    mathematischerStrassenkoeter fufi;

    unsigned int ui_a=0;
    int i_b=0;

	// * Ein- und Auskommentieren
	std::cout << fufi.Bellen(2.54857963254) << std::endl; // -> ruft Fkt mit double auf
	std::cout << fufi.Bellen(1.589) << std::endl; // * Was passiert hier?
	// -> wird auch double-Variante. Kommazahl ist immer erstmal double
	// für floatZahl: fufi.Bellen(1.589f) => float

	// * Ein- und Auskommentieren
    fufi.Bellen('#');
	fufi.Bellen(128.87, 9); // -> geht so, da keine double-Alternative implementiert
	fufi.Bellen(5, 328.87);

	// * Ein- und Auskommentieren
	//fufi.Bellen(-128);
	//fufi.Bellen(128); // Was passiert hier // wird immer als signed angenommen
	fufi.Bellen(ui_a);
	fufi.Bellen(i_b);
	std::cout << fufi.Bellen("Das ist ja supper!") << std::endl;
/**/
return 0;
}
