// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung

#define AUSNAHME_A 1
#define AUSNAHME_B 2
#define AUSNAHME_C 3

class Ausnahmefallbehandlung
{
	private:
		int grund;
	public:
		Ausnahmefallbehandlung();
		Ausnahmefallbehandlung(int _grund);
		~Ausnahmefallbehandlung();

		int get_grund();

		int evalfEingabe(Geldautomaten& automat);
		int evalfSystemanbindung(unsigned int eval, unsigned int ident, Geldautomaten& automat);
};

