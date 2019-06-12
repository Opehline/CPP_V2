// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.03.01 der C++ Programmierung
// * Reine virtuelle Funktionen


#include <iostream>

#define VIRTUAL


// * BASISKLASSE
class Automaten
{
	protected:
		int BildschirmMenge;

	public:
	    Automaten();
	    ~Automaten();
		#ifndef VIRTUAL
			void setallInfo(int a);
			int get_BildschirmMenge();
		#else
			// * Reine virtuelle Funktion wird angelegt
			virtual void setallInfo(int a) = 0;
			virtual int get_BildschirmMenge() = 0;
		#endif
};

void Automaten::setallInfo(int a)
{;}
#if 0 // * Fortgeschritten
Automaten::Automaten()
{ std::cout << "Ein Automat wurde erstellt\n" << this << std::endl ;}
Automaten::~Automaten()
{ std::cout << "Ein Automat wurde zerstoert\n" << this << std::endl ;}
#endif
class Geldautomaten : public Automaten
{
	public:
		// * Konstruktor der unser Objekt
		// * bereit stellt (initialisiert).
		Geldautomaten()
		{
		    std::cout << "Neuer Geldautomat ist erstellt!"
		         << std::endl;
        }

		~Geldautomaten(){};

		void public_setallInfo(int a)
		{
			setallInfo(a);
		}

	private:
		// * Reine virtuelle setter-Methode
        // * wird zwangshaft implementiert
		void setallInfo(int a)
		{
			BildschirmMenge = a;
		}

		#if 1
			// * Reine virtuelle getter-Methode
			// * werden zwangshaft implementiert
			int get_BildschirmMenge()
			{
			    return BildschirmMenge;
            }
		#endif
};


int main()
{
//	Automaten a1;

    std::cout << "Geldautomat b11" << std::endl;
    Geldautomaten b11;
    b11.public_setallInfo(2);
	//b11.public_Fertigung();
 /* */

    // * Fortgeschritten
    //std::cout << &b11;
    return 0;
}
