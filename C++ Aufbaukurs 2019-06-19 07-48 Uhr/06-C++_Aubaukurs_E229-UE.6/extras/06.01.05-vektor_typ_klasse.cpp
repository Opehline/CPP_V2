// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.02.05 der C++ Programmierung
// * Vektor zur Objekterstellung (Vektor Typ Klasse)

#include <iostream>
#include <vector>

// * Klasse einrichten
class Patient
{
	private:
		std::string Nachname;
		std::string Vorname;

	public:
		 Patient( )
		 { Vorname = ' '; }

		 Patient(std::string name, std::string vname)
		 { Nachname = name;
			Vorname = vname; }

		std::string getNachname() const
		{ return Nachname; }

		std::string getVorname() const
		{ return Vorname; }

		void setNachname(std::string name)
		{	Nachname = name; }

		void setVorname(std::string vname)
		{	Vorname = vname; }

		void vectorfuellen(std::vector<Patient>& v_patfuell);
		void vectorzeigen(const std::vector<Patient>& v_patzeigen);

};


void Patient::vectorfuellen(std::vector<Patient>& v_patfuell)
{
	 Patient newPatienten01("ma", "mo");
	 v_patfuell.push_back(newPatienten01);

	 Patient newPatienten02("me", "mi");
	 v_patfuell.push_back(newPatienten02);
}


void Patient::vectorzeigen(const std::vector<Patient>& v_patzeigen)
{
    int i;
    int size = v_patzeigen.size();

    for(i=0; i<size; i++)
    {
		std::cout << "Nachname Patient: " << v_patzeigen.at(i).getNachname() << std::endl;
		std::cout << "Vorname Patient: " << v_patzeigen.at(i).getVorname() << std::endl;
    }
}


int main()
{
	Patient patientEintrag;
    std::vector<Patient> v_pat;
    patientEintrag.vectorfuellen(v_pat);   
    patientEintrag.vectorzeigen(v_pat);

    return 0;
}
