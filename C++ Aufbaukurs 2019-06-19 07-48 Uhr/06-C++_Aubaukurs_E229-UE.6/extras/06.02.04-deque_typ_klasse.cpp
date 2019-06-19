// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.02.04 der C++ Programmierung
// * Deque zur Objekterstellung (Vektor Typ Klasse)

#include <iostream>
#include <deque>

using namespace std;

// Klasse einrichten
class Patient
{
    // Eigenschaften
	private:
		std::string Nachname;
		std::string Vorname;

	public:
		 Patient( )
		 { Vorname = ' '; }

		 Patient(std::string name, std::string vname)
		 { Nachname = name;
			Vorname = vname; }

		 //~Patient( )
		 //{ }

		 std::string getNachname() const
		{ return Nachname; }

		std::string getVorname() const
		{ return Vorname; }

		void setNachname(std::string name)
		{	Nachname = name; }

		void setVorname(std::string vname)
		{	Vorname = vname; }

		void dequefuellen(std::deque<Patient>& v_patfuell);
		void dequezeigen(const std::deque<Patient>& v_patzeigen);
};


void Patient::dequefuellen(std::deque<Patient>& v_patfuell)
{
	 Patient newPatienten01("ma", "mo");
	 v_patfuell.push_front(newPatienten01);

	 Patient newPatienten02("me", "mi");
	 v_patfuell.push_front(newPatienten02);
}


void Patient::dequezeigen(const std::deque<Patient>& v_patzeigen)
{
    int i;
    int size = v_patzeigen.size();

    for(i=0; i<size; i++)
    {
		std::cout << "Nachname Patient: " << v_patzeigen[i].getNachname() << std::endl;
		std::cout << "Vorname Patient: " << v_patzeigen[i].getVorname() << std::endl;
    }
}


int main()
{
	Patient patientEintrag;
    std::deque<Patient> v_pat;
    patientEintrag.dequefuellen(v_pat);   
    patientEintrag.dequezeigen(v_pat);

    return 0;
}
