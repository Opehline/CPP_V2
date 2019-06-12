// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung

/*struct*/ class Geldautomaten
{
	private:
		int eingabeWert;
		int selec;

		void NetzAnbindung(int);
		void UeberpruefungAnbindug(int, int);
		void NetzTrennung(int);
		void AktionAnbindung(int, int);
		void SystemAnbindungsProzess(int, int);

	public:
		void set_eingabeWert(int);
		int get_eingabeWert();
		void set_selec(int);
		int get_selec();
		Geldautomaten();
		~Geldautomaten();
		int Eingabe(int);
		void SystemAnbindungsProzess_public(int, int);
};
