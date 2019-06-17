// Gisela Neira
// C++ Basics E228
// * Programm 05.02.01 der C/C++ Programmierung
//   const in Funktionen:
//   - Einen return-Wert konstant machen
//   - Einen Parameter konstant machen
//   - Eine Funktion konstant machen

#include <iostream>

class WasIstDas
{
	private:

		std::string a;
		std::string c;

	public:

		WasIstDas()
		{
			a="Das ist ein Ei.";
			c="Das ist aber definitiv ein Handy.";
		}
	
		// * Methoden werden physich nicht innerhalb der Klasse im Speicher gelegt.
		// * Anmerkung: Strings werden nicht als Referenzen sonder als Kopie an
		// * eine Funktion uebergeben.
		const std::string& erraten(std::string const b) const
		{ 
			int a=0;
			
			std::cout << "Was ist das? " << this->a << std::endl;
			std::cout << "Was ist das? " << b << std::endl;
			std::cout << "Was ist das? " << this->c << std::endl; 
			return c;
		}
}wasDies;	// * Globales Objekt


int main(void)
{

	WasIstDas was;
	was.erraten("Das ist eine Biene!");

	// * Ein const-return-Wert hat in C++ "keinen" grossen Sinn mehr.
	// * Der Sinn bleibt in der Sicherheit bestehen.
	//const std::string& wasWas = was.erraten("Das ist eine Fliege!"); 	
	//std::cout << wasWas << std::endl;
	//wasWas="Das ist keine Fliege, sondern eine Spinne.";
	//std::cout << wasWas << std::endl;


return 0;
}
