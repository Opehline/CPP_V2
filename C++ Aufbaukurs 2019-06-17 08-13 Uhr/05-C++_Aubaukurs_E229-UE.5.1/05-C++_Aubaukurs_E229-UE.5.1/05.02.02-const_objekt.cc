// Gisela Neira
// C++ Basics E228
// * Programm 05.02.02 der C/C++ Programmierung
// * Ein konstantes Objekt erstellen

#include <iostream>

class Kreis
{
	public:
		struct Punkt
		{
			int KordX;
			int KordY;
			int Radio;
		}punkt;

	public:
		Kreis(std::string nummer)
		{
			punkt.KordX = 2;
			punkt.KordY = 2;
			punkt.Radio = 1;
			std::cout << "Kreis " << nummer << " wurde erstellt:" << std::endl;

			std::cout << "X: " << punkt.KordX << std::endl;
			std::cout << "Y: " << punkt.KordY << std::endl;
			std::cout << "Z: " << punkt.Radio << "\n" << std::endl;
		}

		~Kreis()
		{
			std::cout << "Kreis ist geloescht." << std::endl;
		}

	 	// * Setters und Getters
	    void setwertX(int x)
		{
			punkt.KordX = x;
		}
	    void setwertY(int y)
		{
			punkt.KordY = y;
		}
	    void setwertRadio(int z)
		{
			punkt.Radio = z;
		}

	    int getwertKordX() { return punkt.KordX ; }
		int getwertKordY() { return punkt.KordY ; }
		int getwertRadio() { return punkt.Radio ; }
};

int
{
	int a=5, b=4, c=2;

	// * Es sollen belibig viele Kreise erstellt werden. Der kleinste ist aber immer gleich
    const Kreis basisKreis("Basiskreis unaenderbar"); // ruft default constructor

	#if 0
    basisKreis.setwertX(a); // compiler error: wegen const obwohl Variable in Public
    basisKreis.setwertY(b); // compiler error: wegen const obwohl Variable in Public
    basisKreis.setwertRadio(c); // compiler error: wegen const obwohl Variable in Public
	#endif

	Kreis Kreis1("1 aenderbar");
    Kreis1.setwertX(a); // compiler error: wegen const obwohl Variable in Public
    Kreis1.setwertY(b); // compiler error: wegen const obwohl Variable in Public
    Kreis1.setwertRadio(2*c); // compiler error: wegen const obwohl Variable in Public

	Kreis Kreis2("2 aenderbar");
    Kreis2.setwertX(a); // compiler error: wegen const obwohl Variable in Public
    Kreis2.setwertY(b); // compiler error: wegen const obwohl Variable in Public
    Kreis2.setwertRadio(3.6*c); // compiler error: wegen const obwohl Variable in Public

    return 0;
}
