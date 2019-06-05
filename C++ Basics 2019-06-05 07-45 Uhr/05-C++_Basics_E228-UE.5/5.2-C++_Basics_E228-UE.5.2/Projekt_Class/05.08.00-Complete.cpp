// Gisela Neira
// C++ Basics E228
// * Projekt 06.08.01 der C/C++ Programmierung

#include <iostream>


class ElternKlasse
{
	private:
		std::string meinText;
		
	protected: 
	//public:
		int alter;
		
	public:
		// * Diese Funktion auslagern
		void fmeinText()
		{
			meinText={"Ich bin ein private Text! \n\n"};
			std::cout << meinText;
		}
};

class KindKlasse : public ElternKlasse
{ 
	public:
		void Ausgabe()
		{
			alter=49;
			//meinText={"Ich bin eine private Variable der Elternklasse an die Kindklasse vererbt."};
			
			std::cout << "****Ich bin " << alter << " Jahre jung!****\n" << std::endl;
			std::cout << "Ich bin eine KindKlasse, erbe von meiner ElternKlasse das Alter!" << std::endl;
			std::cout << "Ohhh! Wir sparen Schreibarbeit!" << std::endl;
			
			//std::cout << meinText << std::endl;
		}
};


int main()
{
	ElternKlasse einObjekt;
	//einObjekt.meinText={"Ich bin ein private Text!"};
	einObjekt.fmeinText();
	
	KindKlasse eineProbe;
	eineProbe.Ausgabe();
	//eineProbe.alter=49;
	
return 0;
}
