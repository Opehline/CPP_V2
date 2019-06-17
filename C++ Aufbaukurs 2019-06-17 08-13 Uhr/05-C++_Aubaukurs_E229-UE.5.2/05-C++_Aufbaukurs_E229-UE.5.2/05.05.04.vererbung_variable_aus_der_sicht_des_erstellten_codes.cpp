// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 05.05.04 der C/C++ Programmierung
// * Jede Menge erbender leerer Klassen

#include <iostream>

class Patient
{
	public:
		Patient(){}

	protected:
		double ops[10000];
		double * p_ops=ops;

	private:
		double ups[10000];
		double * p_ups=ups;
};

class PatientSchwehrKrank1 : private Patient // * Eine leere Klasse: jede leere Klasse hat 1 Byte groesse
{
	public:

	private:
};

class PatientSchwerKrank2 : private PatientSchwehrKrank1 // * Eine leere Klasse: jede leere Klasse hat 1 Byte groesse
{
	public:

	private:
};

class PatientSchwerKrank3 : private PatientSchwerKrank2 // * Eine leere Klasse: jede leere Klasse hat 1 Byte groesse
{
	public:

	private:
};

class PatientSchwerKrank4 : private PatientSchwerKrank3 // * Eine leere Klasse: jede leere Klasse hat 1 Byte groesse
{
	public:

	private:
};

int main()
{
	Patient BauchSchmerzen;
	PatientSchwehrKrank1 SehrAlteFrau;
	PatientSchwerKrank2 AndereKrankeFrau;
	PatientSchwerKrank3 KrankesKind;
	PatientSchwerKrank4 KrankerMann;

	#if 0
	std::cout << &BauchSchmerzen << std::endl;
	std::cout << &SehrAlteFrau << std::endl;
	std::cout << &AndereKrankeFrau << std::endl;
	std::cout << &KrankesKind << std::endl;
	std::cout << &KrankerMann << std::endl;
    #endif // 0

	std::cout << "Groesse PatientNormal: \t\t"<< sizeof(BauchSchmerzen) <<" Bytes" << std::endl;
	std::cout << "Groesse SehrAlteFrau: \t\t"<< sizeof(SehrAlteFrau) <<" Bytes" << std::endl;
	std::cout << "Groesse AndereKrankeFrau: \t"<< sizeof(AndereKrankeFrau) <<" Bytes" << std::endl;
	std::cout << "Groesse KrankesKind: \t\t"<< sizeof(KrankesKind) <<" Bytes" << std::endl;
	std::cout << "Groesse KrankerMann: \t\t"<< sizeof(KrankerMann) <<" Bytes" << std::endl;

return 0;
}
