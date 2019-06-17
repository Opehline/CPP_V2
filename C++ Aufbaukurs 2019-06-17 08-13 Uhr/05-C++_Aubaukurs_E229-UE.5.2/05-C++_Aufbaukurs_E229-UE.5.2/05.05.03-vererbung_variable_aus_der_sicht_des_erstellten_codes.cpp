// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.05.03 der C/C++ Programmierung
// * Jede Menge erbender leerer Klassen

#include <iostream>

class Patient
{
	public:
		Patient()
		{
			//std::cout << "Konstruktor von Patient > " << this << std::endl;	// * Die Adresse des Objekts ist
																			// * die Adresse des ersten Elements
																			// * der Datenstuktur (class).
			std::cout << "Patient &varProt 1 " << &varProt1 << std::endl;
			//std::cout << "Patient &varProt 2 " << &varProt2 << std::endl;
		}
	protected:
		double varProt1;
		//double varProt2;
};

class PatientSchwehrKrank : private Patient // * Eine leere Klasse: jede leere Klasse hat 1 Byte groesse
{
	public:
		PatientSchwehrKrank()
		{
			//std::cout << "Konstruktor von PatientSchwehrKrank > " << this << std::endl;
			std::cout << "PatientSchwehrKrank &varProt " << &varProt1 << std::endl;
			/*std::cout << "PatientSchwehrKrank &varProt " << &varProt2 << std::endl;*/
		}

	private:
};


int main()
{
	Patient krank;
	PatientSchwehrKrank sehrKrank;

return 0;
}
