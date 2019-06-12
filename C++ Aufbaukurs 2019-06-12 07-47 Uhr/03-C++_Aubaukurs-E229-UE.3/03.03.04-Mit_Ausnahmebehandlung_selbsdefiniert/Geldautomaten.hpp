// Gisela Neira
// C++ Aufbaukurs E229
// * Exception-Handling 03.02.01 der C++ Programmierung

class Geldautomaten 
{
	protected:
		void NetzAnbindung(int na_id);
		void UeberpruefungAnbindug(int u_evaluation, int u_id);
		void NetzTrennung(int id);
		void AktionAnbindung(int aa_evaluation, int aa_id);
		void SystemAnbindungsProzess(int sa_id, int sa_evaluation);

	public:
		Geldautomaten();
		~Geldautomaten();
		void pubic_SystemAnbindungsProzess(int sa_id, int sa_evaluation);
};
// * Vererbung....
