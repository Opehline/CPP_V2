// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.05.02 der C++ Programmierung
// * Vererbung Konstruktor
// * Eine leere Klasse: jede leere
// * Klasse hat 1 Byte groesse

#include <iostream>


class Patient
{
	public:
		Patient()
		{
			std::cout << "Patient > " << this << std::endl;
		}

	private:
};

class PatientRisiko : private Patient
{
	public:

	private:
};

int main()
{
	Patient HerrPeterson;
	PatientRisiko FrauSehrKrank;

	std::cout << "&HerrPeterson > " << &HerrPeterson << std::endl;
	std::cout << "&FrauSehrKrank > " << &FrauSehrKrank << std::endl;

	std::cout << "Groesse HerrPeterson: \t" << sizeof(HerrPeterson) <<" Bytes" << std::endl;
	std::cout << "Groesse FrauSehrKrank: \t" << sizeof(FrauSehrKrank) << " Bytes\n\n"<< std::endl;


return 0;
}
