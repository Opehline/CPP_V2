// Gisela Nira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung

#define AUSNAHME_A 1
#define AUSNAHME_B 2
#define AUSNAHME_C 3

extern const short int OPTIONEN;

/*struct*/ class Ausnahmefallbehandlung
{
	private:
		int grund;
		int eingabeWert;
		Geldautomaten EinAutomat;

	public:
		Ausnahmefallbehandlung();
		Ausnahmefallbehandlung(int _grund);
		~Ausnahmefallbehandlung();
		int catch1(Ausnahmefallbehandlung&, Geldautomaten&);

		int get_grund();

		int evalfEingabe(Geldautomaten&);
		int evalfEingabe();
		int evalfSystemanbindung(unsigned int, unsigned int, Geldautomaten&);
};
