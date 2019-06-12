// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.04.01 der C++ Programmierung
// * Vererbung einer Variable bei Mehrfachvererbung
// * (Das Diamantenproblem)

#include <iostream>

class KlasseA
{
    public:
		int a; 	// * Wird bei der Vererbung zwei mal Kopiert, also uebernommen
};

class KlasseB : virtual public KlasseA
{
	// * Erbt die Variable a
    public:
		int b;

};

class KlasseC : public virtual KlasseA
{
	// * Erbt auch die Variable a
    public:
		int c;

};

class KlasseD : public KlasseB, public KlasseC
{
	// * Erbt die Variable a sowohl von KlasseB als auch von KlasseC
    public:
		void multiplikation()
		{
			std::cout << a*b*c << std::endl;
		}

};

int main(int argc, char **argv)
{

		KlasseD k3;
		k3.a=10;
		k3.b=20;
		k3.c=30;

		k3.multiplikation();

return 0;
}
