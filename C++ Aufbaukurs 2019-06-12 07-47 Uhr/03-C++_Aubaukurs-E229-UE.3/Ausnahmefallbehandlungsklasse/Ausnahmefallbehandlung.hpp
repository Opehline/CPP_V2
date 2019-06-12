// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.03.02 der C++ Programmierung

#define AUSNAHME_A 1
#define AUSNAHME_B 2
//#define AUSNAHME_C 3
//....

class Ausnahmefallbehandlung //: exception
{
	private:
		int grund;
	public:
		Ausnahmefallbehandlung(int _grund);
		int get_grund();
};
