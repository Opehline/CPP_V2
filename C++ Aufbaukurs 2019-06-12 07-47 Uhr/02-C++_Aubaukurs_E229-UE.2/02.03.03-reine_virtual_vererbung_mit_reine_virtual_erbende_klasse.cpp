// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 02.03.03 der C++ Programmierung
// * Reine virtuelle Funktionen - Vererbung
// * erbende Klasse uerbladet nicht reine virtuelle Funktion


#include <iostream>

class Automaten
{
	protected:
		int BildschirmMenge;
		int MengeScheine;
		int GAid_nr;
		virtual void GeldautomatenFertigung() = 0;

	public:
		// * Reine virtuelle Funktion wird angelegt
		virtual void set_allInformation(int _BildschirmMenge, int _MengeScheine, int _GAid_nr) = 0;
		virtual int get_BildschirmMenge() = 0;
		virtual int get_MengeScheine() = 0;
		virtual int get_GeldAutomatId_Nr() = 0;
		void public_GeldautomatenFertigung()
		{
			GeldautomatenFertigung();
		}
};

class Geldautomaten : public Automaten
{
	public:
	    // * Konstruktor der unser Objekt bereit stellt (initialisiert).
	    Geldautomaten() { std::cout << "Neuer Geldautomat ist erstellt!" << std::endl;  }
		~Geldautomaten(){};
		void public_set_allInformation(int _BildschirmMenge, int _MengeScheine, int _GAid_nr)
		{
			set_allInformation(_BildschirmMenge, _MengeScheine, _GAid_nr);
		}

		// * Reine virtuelle getter-Methode werden zwangshaft benutzt
		int get_BildschirmMenge()
		{ return BildschirmMenge; }

		int get_MengeScheine()
		{ return MengeScheine; }

		int get_GeldAutomatId_Nr()
		{ return GAid_nr; }

	protected:
		// * Reine virtuelle setter-Methode wird hier nicht überschrieben sondern uebertragen:
		/*virtual*/ void set_allInformation(int _BildschirmMenge, int _MengeScheine, int _GAid_nr) = 0;

		// * Reine virtuelle Methode werden zwangshaft benutzt
	    void GeldautomatenFertigung()
	    {
			std::cout << "Geldautomat Id-Nr.: "<< GAid_nr << std::endl;
			std::cout << "Menge Scheinen: " << MengeScheine <<  std::endl;
			std::cout << "Menge Bildschirme: " << BildschirmMenge << std::endl;
		}
};

class Geldautomaten_mitFingerprintidentification : public Geldautomaten /*Automaten */
{
    public:
	    Geldautomaten_mitFingerprintidentification(int serial_id)
		{ std::cout << "Neuer Geldautomat mit Fingerprintidentifikation Serie " << serial_id << " ist erstellt!" << std::endl;  }
		    // * Konstruktor der unser Objekt bereit stellt (initialisiert).
		~Geldautomaten_mitFingerprintidentification(){};
		void public_set_allInformation(int _BildschirmMenge, int _MengeScheine, int _GAid_nr)
		{
			set_allInformation(_BildschirmMenge, _MengeScheine, _GAid_nr);
		}

	private:
		int serial_id;
		// * Reine virtuelle setter-Methode wird zwangshaft ueberschrieben da Elternklasse
		// * nicht ueberladen hat
		void set_allInformation(int _BildschirmMenge, int _MengeScheine, int _GAid_nr)
		{
			BildschirmMenge = _BildschirmMenge;
			MengeScheine = _MengeScheine;
			GAid_nr = _GAid_nr;
		}

		// * Reine virtuelle getter-Methode brauchen nicht ueberladen/implementiert werden
		// * da unmittelbare Elternklasse implementiert hat
		// ...
		// ...

		// * Reine virtuelle Methode brauchen nicht ueberladen/implementiert werden
		// * da unmittelbare Elternklasse implementiert hat
		// ...
		// ...

};


int main()
{
	//Geldautomaten p08;

	std::cout << "Geldautomat b10" << std::endl;
    Geldautomaten_mitFingerprintidentification b10(2);
    b10.public_set_allInformation(2, 5692, 20);
	b10.public_GeldautomatenFertigung();

    return 0;
}
