// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung

//#include <exception>
#if 0
enum Ausnahme
{
    AUSNAHME_A=1, AUSNAHME_B=2, AUSNAHME_C=3
};
#else
#define AUSNAHME_A 1
#define AUSNAHME_B 2
#define AUSNAHME_C 3
#endif // 0

class Ausnahmebehandlung //: exception
{
	private:
		int grund;
	public:
	    Ausnahmebehandlung();
		Ausnahmebehandlung(int _grund)
		{
			grund = _grund;
		}

		int get_grund()
		{ return grund; }
};
